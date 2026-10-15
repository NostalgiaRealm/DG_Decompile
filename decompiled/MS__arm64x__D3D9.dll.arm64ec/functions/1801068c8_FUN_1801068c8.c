/*
 * FUN_1801068c8 at 1801068c8
 * undefined FUN_1801068c8(void)
 * Address ranges: 1801068c8-180106a8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1801068c8(longlong param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  
  param_1 = param_1 + (param_2 & 0xffffffff);
  param_2 = param_2 & 0xffffffff;
  if (*(char *)(param_1 + 0x46) != '\0') goto LAB_180106a6c;
  FUN_1801042e0(&DAT_18024e858 + param_2 * 0x96);
  puVar3 = __hybrid_os_arm64x_dispatch_icall;
  if ((&DAT_18024e850)[param_2 * 0x4b] == 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    iVar5 = (*extraout_x11)();
    if (iVar5 == 0) {
      puVar6 = (undefined8 *)FUN_1801323c0((&DAT_18024e85c)[param_2 * 0x96]);
LAB_180106a00:
      (&DAT_18024e850)[param_2 * 0x4b] = puVar6;
    }
    else if (iVar5 == 1) {
      uVar1 = (&DAT_18024e85c)[param_2 * 0x96];
      uVar2 = *(undefined1 *)(DAT_18024d928 + 0x9f9);
      puVar6 = (undefined8 *)FUN_1802229a8(0x1d0);
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        *puVar6 = &PTR_FUN_18022b1f0;
        puVar6[0x31] = 0;
        *(undefined4 *)(puVar6 + 0x30) = 0xffffffff;
        *(undefined4 *)(puVar6 + 0x32) = uVar1;
        puVar6[0x33] = 0;
        puVar6[0x34] = 0;
        puVar6[0x35] = 0;
        puVar6[0x36] = 0;
        puVar6[0x37] = 0;
        puVar6[0x38] = 0;
        *(undefined1 *)(puVar6 + 0x39) = uVar2;
        puVar6[2] = 0;
        puVar6[1] = 0;
        puVar6[4] = 0;
        puVar6[3] = 0;
        puVar6[6] = 0;
        puVar6[5] = 0;
        puVar6[8] = 0;
        puVar6[7] = 0;
        puVar6[10] = 0;
        puVar6[9] = 0;
        puVar6[0xc] = 0;
        puVar6[0xb] = 0;
        puVar6[0xe] = 0;
        puVar6[0xd] = 0;
        puVar6[0x10] = 0;
        puVar6[0xf] = 0;
        puVar6[0x12] = 0;
        puVar6[0x11] = 0;
        puVar6[0x14] = 0;
        puVar6[0x13] = 0;
        puVar6[0x16] = 0;
        puVar6[0x15] = 0;
        puVar6[0x18] = 0;
        puVar6[0x17] = 0;
        puVar6[0x1a] = 0;
        puVar6[0x19] = 0;
        puVar6[0x1c] = 0;
        puVar6[0x1b] = 0;
        puVar6[0x1e] = 0;
        puVar6[0x1d] = 0;
        puVar6[0x20] = 0;
        puVar6[0x1f] = 0;
        puVar6[0x22] = 0;
        puVar6[0x21] = 0;
        puVar6[0x23] = 0;
        puVar6[0x25] = 0;
        puVar6[0x24] = 0;
        puVar6[0x27] = 0;
        puVar6[0x26] = 0;
        puVar6[0x29] = 0;
        puVar6[0x28] = 0;
        puVar6[0x2a] = 0;
        puVar6[0x2b] = 0;
        puVar6[0x2c] = 0;
        puVar6[0x2e] = 0;
        puVar6[0x2d] = 0;
        puVar6[0x2f] = 0;
      }
      goto LAB_180106a00;
    }
    if ((&DAT_18024e850)[param_2 * 0x4b] != 0) {
      (*(code *)puVar3)(0x180224000);
      cVar4 = (*extraout_x11_00)();
      if (cVar4 == '\0') {
        if ((&DAT_18024e850)[param_2 * 0x4b] != 0) {
          uVar7 = (*(code *)puVar3)(0x180224000);
          (*extraout_x11_01)(uVar7,1);
        }
        (&DAT_18024e850)[param_2 * 0x4b] = 0;
        FUN_1801042d0(&DAT_18024e858 + param_2 * 0x96);
      }
    }
  }
  if ((&DAT_18024e850)[param_2 * 0x4b] != 0) {
    *(undefined1 *)(param_1 + 0x46) = 1;
  }
LAB_180106a6c:
  return (&DAT_18024e850)[param_2 * 0x4b] != 0;
}

