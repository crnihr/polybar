[Variables]
System_X=1430

[Metadata]
Name=Paper\\System
Author=reddit.com/u/falconwingz
Description=RAM

[measureCPU]
Measure=CPU
Processor=0
UpdateDivider=4

[MeasurePhysMemTotal]
Measure=PhysicalMemory
Total=1
UpdateDivider=3600

[MeasurePhysMemUsed]
Measure=PhysicalMemory
UpdateDivider=4

[MeasurePhysMemFree]
Measure=PhysicalMemory
InvertMeasure=1
UpdateDivider=4

[SystemIcon]
Meter=String
Text=
FontFace=Material Icons
FontSize=(#Font_Size#*16/13)
FontColor=#TextColor1#
AntiAlias=1
StringAlign=LeftCenter
X=(#Bar_OffsetX#+#System_X#)
Y=(#Bar_OffsetY#+#Bar_Height#/2)
DynamicVariables=1

[meterValueRAM]
Meter=String
MeasureName=MeasurePhysMemTotal
MeasureName2=MeasurePhysMemUsed
MeasureName3=MeasurePhysMemFree
FontFace=#Font_Face#
FontSize=#Font_Size#
FontWeight=#Font_Weight#
FontColor=#TextColor1##Font_Opacity#
AntiAlias=1
StringAlign=LeftCenter
X=8R
Y=r
LeftMouseUpAction=
NumOfDecimals=1
AutoScale=1
;Text="RAM: %3b / %1b"
Text="RAM: %3b"

[CpuIcon]
Meter=String
;Text=
;FontFace=FontAwesome
Text=
FontFace=Material Icons
FontSize=(#Font_Size#*16/13)
FontColor=#TextColor2#
AntiAlias=1
StringAlign=LeftCenter
X=12R
Y=r
DynamicVariables=1

[meterValueCPU]
Meter=String
MeasureName=measureCPU
X=8R
Y=r
FontFace=#Font_Face#
FontSize=#Font_Size#
FontWeight=#Font_Weight#
FontColor=#TextColor2##Font_Opacity#
AntiAlias=1
StringAlign=LeftCenter
DynamicVariables=1
Text=CPU: %1%
LeftMouseUpAction=taskmgr
