<?xml version="1.0" encoding="UTF-8"?>
<html xsl:version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
<body style="font-family:Araial; font-size:12pt; background-color:#EEEEE">
<xsl:for-each select="student_marks/student">
	<div style="background-color:teal; color:white; padding:4px">
	¬¬¬¬	<span style="font-weight:bold"><xsl:value-of select="name"/> - </span>
<xsl:value-of select="roll"/>
	</div>
	<div style="margin-left:20px; margin-bottom:1em; font-size:10pt">
		<p>
		<xsl:value-of select="marks"/>
		</p>
	</div>
</xsl:for-each>
</body>
</html>
