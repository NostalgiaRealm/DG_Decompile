/*
 * FUN_1800451c8 at 1800451c8
 * char __fastcall FUN_1800451c8(undefined8 param_1, longlong * param_2)
 * Address ranges: 1800451c8-180045237
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800451c8(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  uVar3 = (**(code **)(**(longlong **)(*param_2 + 0x18) + 0x40))();
  cVar2 = '\x01';
  if (uVar3 < (ulonglong)param_2[2]) {
    cVar2 = '\x01';
    if (param_2[1] != -1) {
      uVar4 = FUN_180049e38(param_2[1] + 8,'\0');
      cVar2 = (char)uVar4;
      if (cVar2 == '\0') {
        return '\0';
      }
    }
    plVar1 = *(longlong **)(*param_2 + 0x18);
    (**(code **)(*plVar1 + 0x48))(plVar1,param_2[2],*(undefined8 *)(*param_2 + 0x20));
    WaitForSingleObject(*(HANDLE *)(*param_2 + 0x20),0xffffffff);
  }
  return cVar2;
}

