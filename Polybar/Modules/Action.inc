[Variables]
Action_X =1885

[Metadata]
Name=Pratous\\Action
Author=reddit.com/u/khanhas
Description=Action Center


[ActionShape]
Meter=Shape
X=(#Bar_OffsetX#+#Action_X#)
Y=#Bar_OffsetY#
Shape=Rectangle 0,0,([DesktopButton:W]+#Bar_Height#/2),#Bar_Height# | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color 00000001
DynamicVariables=1

[ActionButton]
Meter=String
Text=
;Text=
FontFace=Material Icons
FontSize=(#Font_Size#*16/13)
FontColor=#TextColor1#
AntiAlias=1
StringAlign=CenterCenter
X=(#Bar_Height#/4+[DesktopButton:W]/2)+5r
Y=(#Bar_OffsetY#+#Bar_Height#/2)+1
SolidColor=0,0,0,1
LeftMouseUpAction=["#@#nircmd.exe" sendkeypress lwin+a]
RightMouseUpAction=
ToolTipText=
DynamicVariables=1


