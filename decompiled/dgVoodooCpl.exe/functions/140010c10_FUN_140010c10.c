/*
 * FUN_140010c10 at 140010c10
 * ulonglong __fastcall FUN_140010c10(longlong param_1)
 * Address ranges: 140010c10-140010c7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_140010c10(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  
  puVar2 = (undefined8 *)FUN_14002423c(0x5b0);
  uVar3 = 0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2 = FUN_1400130b0(puVar2);
    *(undefined8 **)(param_1 + 0x480) = puVar2;
    uVar3 = 0;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140010c75;
    uVar1 = FUN_140013450((longlong)puVar2);
    uVar3 = CONCAT44(extraout_var,uVar1);
    puVar2 = *(undefined8 **)(param_1 + 0x480);
    if ((char)uVar1 != '\0') {
      *(undefined8 **)(param_1 + 0x10) = puVar2;
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = (**(code **)*puVar2)(puVar2,1);
    }
  }
  *(undefined8 *)(param_1 + 0x480) = 0;
LAB_140010c75:
  return uVar3 & 0xffffffffffffff00;
}

