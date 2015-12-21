﻿'///////////////////////////////////////////////////////////////////////
' Copyright 2001-2015 Aspose Pty Ltd. All Rights Reserved.
'
' This file is part of Aspose.Words.Cloud. The source code in this file
' is only intended as a supplement to the documentation, and is provided
' "as is", without warranty of any kind, either expressed or implied.
'///////////////////////////////////////////////////////////////////////

Imports Aspose.Cloud

Namespace Watermark
    Class RemoveWatermark
        Public Shared Sub Run()
            Dim inputfile As String = "doc-sample-watermark.doc"

            Dim outfile As String = Common.GetOutputFilePath(inputfile, True)

            ' Upload input file from local directory to Cloud Storage
            Common.UploadFile(inputfile, String.Empty)

            ' Remove Watermark from a Word Document
            Common.WordsService.WordsDocumentWatermark.DeleteWatermark(inputfile, outfile, Common.FOLDER)

            ' Download output file from cloud storage and save on local directory
            Dim dataDir As String = Common.DownloadFile(inputfile, String.Empty)

            Console.WriteLine(Convert.ToString(vbLf & "Watermark text added successfully." & vbLf & "File saved at ") & dataDir)
        End Sub
    End Class
End Namespace