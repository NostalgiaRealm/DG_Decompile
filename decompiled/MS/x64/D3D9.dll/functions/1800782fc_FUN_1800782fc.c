/*
 * FUN_1800782fc at 1800782fc
 * uint __fastcall FUN_1800782fc(undefined8 param_1, longlong * param_2, longlong param_3, uint param_4, byte param_5)
 * Address ranges: 1800782fc-18007842f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800782fc(undefined8 param_1,longlong *param_2,longlong param_3,uint param_4,byte param_5)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_18007df9c(param_1,param_2,param_3,param_4,param_5);
  lVar1 = *(longlong *)(param_3 + 0x1b8);
  if (lVar1 == 0) {
    return uVar2;
  }
  if ((param_4 == 0) || (param_4 == 3)) {
    param_5 = 0xf;
  }
  lVar4 = param_3 + 0x20;
  uVar2 = FUN_1800ec8c0(lVar4,(uint)(byte)(&DAT_1800fe880)[(ulonglong)param_5 * 2],'\x01');
  uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),(&DAT_1800fe881)[(ulonglong)param_5 * 2]);
  if (param_4 == 0) {
    if (*(char *)(lVar1 + 0x53e) != '\0') {
      uVar2 = FUN_180077310(uVar5,param_2,lVar1,uVar2);
      goto LAB_1800783d9;
    }
  }
  else {
    if (param_4 != 3) {
      uVar3 = FUN_180077b10(uVar5,param_2,lVar1,uVar2);
      return (uint)uVar3;
    }
    if (*(char *)(lVar1 + 0x53f) != '\0') {
      uVar2 = FUN_180077874(uVar5,param_2,lVar1,uVar2);
      goto LAB_1800783d9;
    }
  }
  uVar3 = FUN_180077b10(uVar5,param_2,lVar1,uVar2);
  uVar2 = (uint)uVar3;
LAB_1800783d9:
  FUN_1800edbe0((uint *)(lVar1 + 0x20),param_2,0x36,(ulonglong)uVar2);
  return uVar2;
}

