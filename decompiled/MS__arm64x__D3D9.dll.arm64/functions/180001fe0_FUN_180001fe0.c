/*
 * FUN_180001fe0 at 180001fe0
 * undefined FUN_180001fe0(void)
 * Address ranges: 180001fe0-180002173
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180001fe0(longlong param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  
  param_1 = param_1 + (param_2 & 0xffffffff);
  param_2 = param_2 & 0xffffffff;
  if (*(char *)(param_1 + 0x46) != '\0') goto LAB_180002154;
  FUN_1800015a0(&DAT_180253868 + param_2 * 0x96);
  if ((&DAT_180253860)[param_2 * 0x4b] == 0) {
    iVar4 = (**(code **)(*(longlong *)(&DAT_180253850)[param_2 * 0x4b] + 0x38))();
    if (iVar4 == 0) {
      puVar5 = (undefined8 *)FUN_180025908((&DAT_18025386c)[param_2 * 0x96]);
LAB_180002100:
      (&DAT_180253860)[param_2 * 0x4b] = puVar5;
    }
    else if (iVar4 == 1) {
      uVar1 = (&DAT_18025386c)[param_2 * 0x96];
      uVar2 = *(undefined1 *)(DAT_18024de60 + 0x9f9);
      puVar5 = (undefined8 *)FUN_180102f80(0x1d0);
      if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
      }
      else {
        *puVar5 = &PTR_FUN_180234230;
        puVar5[0x31] = 0;
        *(undefined4 *)(puVar5 + 0x30) = 0xffffffff;
        *(undefined4 *)(puVar5 + 0x32) = uVar1;
        puVar5[0x33] = 0;
        puVar5[0x34] = 0;
        puVar5[0x35] = 0;
        puVar5[0x36] = 0;
        puVar5[0x37] = 0;
        puVar5[0x38] = 0;
        *(undefined1 *)(puVar5 + 0x39) = uVar2;
        puVar5[2] = 0;
        puVar5[1] = 0;
        puVar5[4] = 0;
        puVar5[3] = 0;
        puVar5[6] = 0;
        puVar5[5] = 0;
        puVar5[8] = 0;
        puVar5[7] = 0;
        puVar5[10] = 0;
        puVar5[9] = 0;
        puVar5[0xc] = 0;
        puVar5[0xb] = 0;
        puVar5[0xe] = 0;
        puVar5[0xd] = 0;
        puVar5[0x10] = 0;
        puVar5[0xf] = 0;
        puVar5[0x12] = 0;
        puVar5[0x11] = 0;
        puVar5[0x14] = 0;
        puVar5[0x13] = 0;
        puVar5[0x16] = 0;
        puVar5[0x15] = 0;
        puVar5[0x18] = 0;
        puVar5[0x17] = 0;
        puVar5[0x1a] = 0;
        puVar5[0x19] = 0;
        puVar5[0x1c] = 0;
        puVar5[0x1b] = 0;
        puVar5[0x1e] = 0;
        puVar5[0x1d] = 0;
        puVar5[0x20] = 0;
        puVar5[0x1f] = 0;
        puVar5[0x22] = 0;
        puVar5[0x21] = 0;
        puVar5[0x23] = 0;
        puVar5[0x25] = 0;
        puVar5[0x24] = 0;
        puVar5[0x27] = 0;
        puVar5[0x26] = 0;
        puVar5[0x29] = 0;
        puVar5[0x28] = 0;
        puVar5[0x2a] = 0;
        puVar5[0x2b] = 0;
        puVar5[0x2c] = 0;
        puVar5[0x2e] = 0;
        puVar5[0x2d] = 0;
        puVar5[0x2f] = 0;
      }
      goto LAB_180002100;
    }
    if ((longlong *)(&DAT_180253860)[param_2 * 0x4b] != (longlong *)0x0) {
      cVar3 = (**(code **)(*(longlong *)(&DAT_180253860)[param_2 * 0x4b] + 8))();
      if (cVar3 == '\0') {
        puVar5 = (undefined8 *)(&DAT_180253860)[param_2 * 0x4b];
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
        }
        (&DAT_180253860)[param_2 * 0x4b] = 0;
        FUN_180001590(&DAT_180253868 + param_2 * 0x96);
      }
    }
  }
  if ((&DAT_180253860)[param_2 * 0x4b] != 0) {
    *(undefined1 *)(param_1 + 0x46) = 1;
  }
LAB_180002154:
  return (&DAT_180253860)[param_2 * 0x4b] != 0;
}

