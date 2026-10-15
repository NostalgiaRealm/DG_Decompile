/*
 * FUN_180116378 at 180116378
 * undefined FUN_180116378(void)
 * Address ranges: 180116378-180116417;18011641c-180116487
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180116378(longlong *param_1,undefined8 param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  code *extraout_x11;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar6 = 0x8876086c;
  if (param_4 != (uint *)0x0) {
    uVar3 = *(uint *)(param_1 + 1);
    uVar6 = 0x88760866;
    if (uVar3 != 0) {
      lVar7 = *param_1;
      uVar8 = 0;
      do {
        lVar2 = lVar7 + uVar8 * 0x28;
        iVar5 = FUN_180222c00(lVar2,param_2,0x10);
        puVar4 = __hybrid_os_arm64x_dispatch_icall;
        if (iVar5 == 0) {
          uVar3 = *(uint *)(lVar2 + 0x18);
          if (uVar3 == 0) {
            if (*param_4 < 8) {
              *param_4 = 8;
              return 0x88760867;
            }
            if (param_3 == (undefined8 *)0x0) {
              return 0x8876086c;
            }
            *param_3 = *(undefined8 *)(lVar2 + 0x10);
            (*(code *)puVar4)(0x180224000);
            (*extraout_x11)();
            return 0;
          }
          if (*param_4 < uVar3) {
            *param_4 = uVar3;
            return 0x88760867;
          }
          if (param_3 == (undefined8 *)0x0) {
            return 0x8876086c;
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(param_3,*(undefined8 *)(lVar2 + 0x10));
        }
        uVar1 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar1;
      } while (uVar1 < uVar3);
    }
  }
  return uVar6;
}

