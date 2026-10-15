/*
 * FUN_18020c6e8 at 18020c6e8
 * undefined FUN_18020c6e8(void)
 * Address ranges: 18020c6e8-18020c7c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18020c6e8(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *extraout_x11;
  
  puVar2 = (undefined8 *)FUN_1802229a8(0x78);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_180238fb8;
    puVar2[1] = param_1;
    *(undefined4 *)(puVar2 + 2) = param_2;
    *(undefined4 *)((longlong)puVar2 + 0x14) = param_3;
    puVar2[3] = 0x400;
    *(undefined4 *)(puVar2 + 4) = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[6] = 0;
    puVar2[5] = 0;
    puVar2[8] = 0;
    puVar2[7] = 0;
    puVar2[9] = 0;
    if (*(int *)(puVar2 + 3) != 0) {
      uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      uVar1 = (*extraout_x11)(uVar3,*(undefined4 *)((longlong)puVar2 + 0x14));
      *(undefined4 *)(puVar2 + 4) = uVar1;
      thunk_FUN_18022384c(puVar2 + 5);
      return puVar2;
    }
    FUN_18020c468(puVar2);
    FUN_1802229d8(puVar2,0x78);
  }
  return (undefined8 *)0x0;
}

