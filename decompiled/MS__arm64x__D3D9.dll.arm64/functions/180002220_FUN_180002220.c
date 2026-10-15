/*
 * FUN_180002220 at 180002220
 * undefined FUN_180002220(void)
 * Address ranges: 180002220-1800022a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180002220(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar4 = FUN_180020640(param_1,param_2,(&DAT_180253870)[(param_2 & 0xffffffff) * 0x96]);
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    iVar2 = *(int *)((longlong)&DAT_1802539f0 + (param_2 & 0xffffffff) * 600 + 4);
    iVar1 = 0x20;
    if (iVar2 != 8) {
      iVar1 = iVar2;
    }
    uVar3 = FUN_180001e18(param_1,iVar1);
    *(undefined4 *)(&DAT_180253340 + (param_2 & 0xffffffff) * 0x28) = uVar3;
    uVar5 = 1;
  }
  return uVar5;
}

