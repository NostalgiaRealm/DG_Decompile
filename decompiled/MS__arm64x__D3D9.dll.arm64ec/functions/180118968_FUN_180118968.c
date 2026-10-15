/*
 * FUN_180118968 at 180118968
 * undefined FUN_180118968(void)
 * Address ranges: 180118968-1801189e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180118968(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  code *extraout_x11;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  bVar1 = *(char *)(param_1 + 0xf9) == '\0';
  if (bVar1) {
    uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar2,&local_30,*(undefined8 *)(param_1 + 0x88));
    param_2[1] = uStack_28;
    *param_2 = local_30;
    param_2[3] = uStack_18;
    param_2[2] = uStack_20;
    thunk_FUN_180223c20(param_2 + 4,0,0,*(undefined4 *)(param_1 + 0x90),
                        *(undefined4 *)(param_1 + 0x94));
  }
  return bVar1;
}

