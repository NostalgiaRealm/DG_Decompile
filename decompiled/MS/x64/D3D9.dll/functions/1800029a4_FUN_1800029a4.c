/*
 * FUN_1800029a4 at 1800029a4
 * ulonglong __fastcall FUN_1800029a4(longlong param_1, uint param_2)
 * Address ranges: 1800029a4-180002a08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800029a4(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_2;
  uVar3 = FUN_18002f604(param_1,param_2,(&DAT_180112900)[uVar5 * 0x96]);
  if ((char)uVar3 == '\0') {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    uVar1 = *(uint *)((longlong)&DAT_180112a80 + uVar5 * 600 + 4);
    uVar4 = 0x20;
    if (uVar1 != 8) {
      uVar4 = uVar1;
    }
    uVar2 = FUN_180001fa0(param_1,uVar4);
    *(undefined4 *)(&DAT_1801123d0 + uVar5 * 0x28) = uVar2;
    uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,uVar2) >> 8),1);
  }
  return uVar3;
}

