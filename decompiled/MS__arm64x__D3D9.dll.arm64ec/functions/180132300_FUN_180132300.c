/*
 * FUN_180132300 at 180132300
 * undefined FUN_180132300(void)
 * Address ranges: 180132300-18013237f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180132300(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_1802229a8(0x28);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x250);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 600);
    *puVar1 = &PTR_FUN_18022ae80;
    puVar1[1] = uVar3;
    uVar2 = FUN_18013e178(puVar1,param_2);
    if ((uVar2 & 1) == 0) {
      FUN_18013e100(puVar1);
      FUN_1802229d8(puVar1,0x28);
      puVar1 = (undefined8 *)0x0;
    }
  }
  return puVar1;
}

