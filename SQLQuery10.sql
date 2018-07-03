
CREATE TABLE [dbo].[Table_1](
	[Name] [nvarchar](20) NOT NULL,
	[Age] [nvarchar](20) NOT NULL
) ON [PRIMARY]
GO


BULK INSERT Table_1 FROM 'C:\Users\kenx\Documents\file.txt' 
WITH (DATAFILETYPE = 'char',FIELDTERMINATOR = ',', ROWTERMINATOR = '\n') 