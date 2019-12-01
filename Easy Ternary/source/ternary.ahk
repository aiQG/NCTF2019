XOR(a, b)
{
    tempA := a
    tempB := b
    ret := 0
    Loop, 8
    {
       ret += Mod((((tempA >> ((A_Index - 1)*4)) & 15) + ((tempB >> ((A_Index - 1)*4)) & 15)),3) * (16**(A_Index-1))
    }
return ret
}



InputBox, userInput, TTTTCL, Input your flag:
if(ErrorLevel)
Exit
if(!StrLen(userInput))
{
MsgBox, GG
Exit
}

inputArr := []
Loop, parse, userInput
{
    temp:=A_Index
    inputArr.Push(Ord(A_LoopField))
}

inputNum := []    
Loop % inputArr.Length()
{
    temp := inputArr[A_Index]
    temp := DllCall("aiQG.dll\?ToTrit@@YAII@Z", "UInt", temp)
    inputNum.push(temp)
}

key1 := XOR(inputNum[5], inputNum[inputNum.Length()])

inputFlag := []
Loop % inputArr.Length()
{
    temp := XOR(inputNum[A_Index], key1)
    if(Mod(A_Index,2))
    {
        temp := XOR(key1,temp)
    }
    inputFlag.push(temp)
}

temp1 := 1
Loop % inputFlag.Length()    ;Check
{
    temp := inputFlag[A_Index]
    temp := DllCall("aiQG.dll\?Check@@YAIII@Z", "UInt", temp, "UInt", A_Index)
    if(!temp)
    { 
        temp1 := 0
    }
}

if(temp1)
{
    MsgBox, Ok
}
if(!temp1)
{
    MsgBox, GG
}

steamGroup = "steamcommunity.com/groups/sastGame"