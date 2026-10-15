/*
 * FUN_18021ce50 at 18021ce50
 * undefined FUN_18021ce50(void)
 * Address ranges: 18021ce50-18021cf2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18021ce50(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 in_x7;
  code *extraout_x11;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  puVar1 = (undefined8 *)FUN_1802229a8(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = param_2;
    *puVar1 = param_1;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 3) = 0;
    uVar2 = FUN_18020d338(*puVar1,*(undefined4 *)(puVar1 + 1),&DAT_180239a30,0,&DAT_180239a48,0x400,
                          0,in_x7,puVar1 + 2);
    if ((uVar2 & 1) != 0) {
      local_38 = 0;
      uStack_30 = 0;
      local_40 = 0;
      uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(uVar3,0,&local_38,&local_40);
      return puVar1;
    }
    FUN_18021ce08(puVar1);
    FUN_1802229d8(puVar1,0x20);
  }
  return (undefined8 *)0x0;
}

