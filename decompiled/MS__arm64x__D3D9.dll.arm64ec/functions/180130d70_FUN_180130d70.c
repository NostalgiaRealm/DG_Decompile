/*
 * FUN_180130d70 at 180130d70
 * undefined FUN_180130d70(void)
 * Address ranges: 180130d70-180130df7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180130d70(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulonglong extraout_x1;
  code *extraout_x11;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 auStack_20 [16];
  
  local_30 = 0;
  uVar1 = FUN_18012faf0();
  uStack_28 = CONCAT44(*(ushort *)(param_1 + 0x16) - 1,uVar1);
  if ((int)extraout_x1 != -1) {
    puVar2 = (undefined8 *)
             FUN_180130288(param_1,auStack_20,extraout_x1 & 0xffffffff,(int)extraout_x1 + 1);
    uStack_28 = puVar2[1];
    local_30 = *puVar2;
  }
  uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar3,*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98),
                  *(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x18),&local_30);
  return;
}

