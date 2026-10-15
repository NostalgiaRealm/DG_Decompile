/*
 * FUN_1800a2f40 at 1800a2f40
 * undefined FUN_1800a2f40(void)
 * Address ranges: 1800a2f40-1800a3107
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800a2f40(undefined4 param_1,byte param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  
  puVar2 = (undefined8 *)FUN_180102f80(0x100);
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar2 + 2) = 0;
  lVar3 = DAT_18024de28;
  puVar2[1] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *puVar2 = &PTR_FUN_180233620;
  *(undefined4 *)(puVar2 + 8) = param_1;
  *(undefined1 *)((longlong)puVar2 + 0x44) = 0;
  *(undefined2 *)((longlong)puVar2 + 0x66) = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  if (lVar3 == 0) {
    lVar3 = thunk_FUN_180102f80(0x200);
    uVar6 = 0x40;
    DAT_18024de24 = 0x40;
    DAT_18024de28 = lVar3;
    if (lVar3 != 0) goto LAB_1800a2fd8;
LAB_1800a2fcc:
    uVar5 = 0;
  }
  else {
    uVar6 = (ulonglong)DAT_18024de24;
LAB_1800a2fd8:
    if ((uint)uVar6 == DAT_18024de20) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = (uVar6 & 0x7fffffff) << 1;
      lVar3 = (uVar6 & 0x7fffffff) << 4;
      if (SUB168(auVar1 * ZEXT816(8),8) != 0) {
        lVar3 = -1;
      }
      lVar4 = thunk_FUN_180102f80(lVar3);
      lVar3 = DAT_18024de28;
      if (lVar4 == 0) goto LAB_1800a2fcc;
      thunk_FUN_180001218(lVar4,DAT_18024de28,(ulonglong)DAT_18024de24 << 3);
      thunk_FUN_180102fc0(lVar3);
      DAT_18024de28 = lVar4;
      *(undefined8 **)(lVar4 + (ulonglong)DAT_18024de20 * 8) = puVar2;
      DAT_18024de24 = DAT_18024de24 << 1;
    }
    else {
      *(undefined8 **)(lVar3 + (ulonglong)DAT_18024de20 * 8) = puVar2;
    }
    DAT_18024de20 = DAT_18024de20 + 1;
    uVar5 = 1;
  }
  *(undefined1 *)((longlong)puVar2 + 0x45) = uVar5;
  *(undefined8 *)((longlong)puVar2 + 0x4e) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x46) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x5e) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x56) = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar2[0x15] = 0;
  *(undefined4 *)(puVar2 + 0x16) = 0;
  puVar2[0x17] = puVar2 + 0x14;
  puVar2[0x19] = 0;
  puVar2[0x18] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1c] = 0;
  *puVar2 = &DAT_180235f88;
  puVar2[0x11] = &PTR_DAT_1802296c8;
  puVar2[0x1e] = 0;
  puVar2[0x1f] = 0;
  puVar2[0x14] = &PTR_FUN_180235ed8;
  if (*(char *)((longlong)puVar2 + 0x45) != '\0') {
    FUN_1800a5438(puVar2 + 0x15,&DAT_1802296b8);
    FUN_1800a5438(puVar2 + 0x15,&DAT_180229488);
    if ((param_2 & 1) != 0) {
      FUN_1800a5438(puVar2 + 0x15,&DAT_180229578);
    }
    *(byte *)((longlong)puVar2 + 0x67) = param_2;
  }
  return puVar2;
}

