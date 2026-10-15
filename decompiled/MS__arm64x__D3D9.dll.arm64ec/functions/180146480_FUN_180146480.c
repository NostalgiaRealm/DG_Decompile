/*
 * FUN_180146480 at 180146480
 * undefined FUN_180146480(void)
 * Address ranges: 180146480-1801464e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180146480(undefined8 *param_1,ulonglong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar6;
  ulonglong uVar7;
  
  *param_1 = &PTR_FUN_1802390c0;
  param_1[8] = &PTR_FUN_1802390f8;
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  if (param_1[9] == 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      uVar7 = 0;
      do {
        lVar6 = param_1[0xb];
        lVar5 = uVar7 * 0x30;
        if (*(longlong *)(lVar5 + lVar6 + 0x20) != 0) {
          do {
            (*(code *)puVar2)();
            uVar4 = (*extraout_x11)();
            if (*(ulonglong *)(lVar6 + lVar5 + 0x28) <= uVar4) break;
            DataMemoryBarrier(2,2);
            Yield();
            lVar6 = param_1[0xb];
          } while (*(longlong *)(lVar5 + 0x20 + lVar6) != 0);
        }
        (*(code *)puVar2)(0x180224000);
        (*extraout_x11_00)();
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + 0xc));
    }
  }
  else if (param_1[0xf] != 0) {
    FUN_180210140(param_1[9],*(undefined4 *)(param_1 + 6),param_1[0x10],param_1[0x11],param_1[3],
                  param_1[4]);
    puVar3 = (undefined8 *)FUN_1801465a4();
    return puVar3;
  }
  *param_1 = &PTR_FUN_1802390d0;
  param_1[8] = &PTR_D3DPERF_GetStatus_native_180239038;
  FUN_1802229d8(param_1[0xb]);
  param_1[8] = &PTR_D3DPERF_GetStatus_native_180239038;
  *param_1 = &PTR_FUN_180239068;
  if ((param_2 & 1) != 0) {
    FUN_1802229d8(param_1,0x90);
  }
  return param_1;
}

