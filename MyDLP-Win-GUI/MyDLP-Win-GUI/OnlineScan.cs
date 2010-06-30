﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Text;
using System.Windows.Forms;
using mydlpsf;
using System.IO;

namespace MydlpWinGui
{
    public partial class OnlineScan : UserControl
    {
        public OnlineScan()
        {
            InitializeComponent();
        }

        private void OnlineScan_Load(object sender, EventArgs e)
        {

            checkBoxEnableScan.Checked = Form1.deviceConf.enableRemovableOnlineScanning;
            checkBoxJustLog.Checked = Form1.deviceConf.justLogRemovableOnlineScanning;
            checkBox1.Checked = Form1.deviceConf.filterPSD;
            checkBox2.Checked = Form1.deviceConf.filterPSP;
            checkBox3.Checked = Form1.deviceConf.filterDWG;
            checkBox4.Checked = Form1.deviceConf.filterCDR;


            ReadRemovableLogFile();
            timer1.Start();

            Globalize();

        }

        public void Globalize()
        {
            tabOnlineOptions.Text = Form1.resM.GetString("online.tabonlinescanopt");
            tabOnlineScanHistory.Text = Form1.resM.GetString("online.tabonlinescanhist");

            // First tab
            groupBox1.Text = Form1.resM.GetString("online.tabonlinescanopt.001");
            groupBox2.Text = Form1.resM.GetString("online.tabonlinescanopt.005");
            label1.Text = Form1.resM.GetString("online.tabonlinescanopt.002");
            checkBoxEnableScan.Text = Form1.resM.GetString("online.tabonlinescanopt.003");
            checkBoxJustLog.Text = Form1.resM.GetString("online.tabonlinescanopt.004");
            button1.Text = Form1.resM.GetString("app.savechanges");
            // second tab
            label2.Text = Form1.resM.GetString("online.tabonlinescanhist.definition");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                MyDLPRemoteDeviceConf.GetInstance().enableRemovableOnlineScanning = checkBoxEnableScan.Checked;
                MyDLPRemoteDeviceConf.GetInstance().justLogRemovableOnlineScanning = checkBoxJustLog.Checked;

                MyDLPRemoteDeviceConf.GetInstance().filterPSD = checkBox1.Checked;
                MyDLPRemoteDeviceConf.GetInstance().filterPSP = checkBox2.Checked;
                MyDLPRemoteDeviceConf.GetInstance().filterCDR = checkBox4.Checked;
                MyDLPRemoteDeviceConf.GetInstance().filterDWG = checkBox3.Checked;

                MyDLPRemoteDeviceConf.Serialize();

                MessageBox.Show("Changes Saved", "Success");
            }
            catch (Exception ex)
            {
                MessageBox.Show("Operation failed!", "Error");
            }
        }

        private void ReadRemovableLogFile()
        {
        
            try
            {
                String str = MyDLPEventLogger.GetInstance().removableLogPath;
                FileStream fs = File.Open(str, FileMode.Open, FileAccess.Read, FileShare.ReadWrite);
                StreamReader reader = new StreamReader(fs);
                //StreamReader reader = new StreamReader(File.OpenRead(str));
                textBox1.Clear();

                String curLine;
                for (int i = 0; i < 100 && (curLine = reader.ReadLine()) != null; i++)
                {
                    textBox1.Text += curLine + Environment.NewLine;
                }

                reader.Close();
                //fs.Close();
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.Message);
            }

        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            ReadRemovableLogFile();
        }
    }
}
