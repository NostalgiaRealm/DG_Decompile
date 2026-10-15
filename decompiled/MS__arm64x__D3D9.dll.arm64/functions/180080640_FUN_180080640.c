/*
 * FUN_180080640 at 180080640
 * undefined FUN_180080640(void)
 * Address ranges: 180080640-1800808b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_180080640(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,
             undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
             undefined4 param_10)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  puVar2 = (undefined8 *)FUN_180102f80(0x290);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x28);
    FUN_1800a2908(puVar2,param_1,uVar1,param_4,param_5,param_7,param_8,param_9,param_10,
                  *(int *)(*(longlong *)(param_1 + 8) + 0x7c) != 2);
    *puVar2 = &PTR_D3DPERF_GetStatus_180235050;
    lVar5 = *(longlong *)(param_1 + 0x1cf10);
    puVar2[10] = lVar5;
    lVar4 = *(longlong *)(param_1 + 0x1cf10);
    *(uint *)(puVar2 + 0xd) = uVar1;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[0xc] = lVar4;
    puVar2[0xe] = lVar4 + (ulonglong)uVar1 * 0x18c0 + 0x6b0;
    puVar2[0xf] = 0;
    lVar4 = *(longlong *)(param_1 + 0x1cf10);
    *(uint *)(puVar2 + 0x15) = uVar1;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x14] = lVar4;
    puVar2[0x16] = lVar4 + (ulonglong)uVar1 * 0x18c0 + 0x6b0;
    puVar2[0x17] = 0;
    puVar2[0xb] = lVar5 + (ulonglong)uVar1 * 0x18c0 + 0x6b0;
    *(undefined4 *)(puVar2 + 0x1d) = 1;
    puVar2[0x1f] = 0;
    puVar2[0x1e] = 0;
    puVar2[0x21] = 0;
    puVar2[0x20] = 0;
    *puVar2 = &PTR_FUN_180234d78;
    puVar2[0x1c] = &PTR_FUN_180234cd0;
    puVar2[0x22] = param_1;
    lVar4 = *(longlong *)(param_1 + 0x1cf10);
    *(uint *)(puVar2 + 0x24) = *(uint *)(puVar2 + 4);
    puVar2[0x27] = 0;
    puVar2[0x28] = 0;
    puVar2[0x29] = 0;
    puVar2[0x2a] = 0;
    puVar2[0x23] = lVar4;
    puVar2[0x25] = lVar4 + (ulonglong)*(uint *)(puVar2 + 4) * 0x18c0 + 0x6b0;
    puVar2[0x26] = 0;
    puVar2[0x2c] = 0;
    puVar2[0x2b] = 0;
    uVar1 = *(uint *)(puVar2 + 4);
    *(undefined4 *)(puVar2 + 0x2d) = 0x100;
    *puVar2 = &PTR_FUN_180234e98;
    *(uint *)(puVar2 + 0x2e) = param_2;
    *(uint *)((longlong)puVar2 + 0x174) = param_3;
    puVar2[0x1c] = &PTR_LAB_180234fa8;
    lVar5 = puVar2[10];
    *(undefined4 *)(puVar2 + 0x2f) = param_6;
    puVar2[0x30] = lVar5;
    *(uint *)(puVar2 + 0x31) = uVar1;
    puVar2[0x34] = 0;
    puVar2[0x35] = 0;
    puVar2[0x36] = 0;
    puVar2[0x37] = 0;
    lVar4 = lVar5 + (ulonglong)uVar1 * 0x18c0 + 0x6b0;
    puVar2[0x38] = lVar5;
    puVar2[0x32] = lVar4;
    puVar2[0x33] = 0;
    puVar2[0x3a] = lVar4;
    puVar2[0x3b] = 0;
    puVar2[0x42] = lVar4;
    puVar2[0x43] = 0;
    *(uint *)(puVar2 + 0x39) = uVar1;
    puVar2[0x3c] = 0;
    puVar2[0x3d] = 0;
    puVar2[0x3e] = 0;
    puVar2[0x3f] = 0;
    puVar2[0x40] = lVar5;
    *(bool *)(puVar2 + 0x49) = *(uint *)((longlong)puVar2 + 0x2c) < 0xe;
    *(uint *)(puVar2 + 0x41) = uVar1;
    puVar2[0x44] = 0;
    puVar2[0x45] = 0;
    puVar2[0x46] = 0;
    puVar2[0x47] = 0;
    *(undefined2 *)((longlong)puVar2 + 0x249) = 0;
    *(float *)(puVar2 + 0x48) = (float)param_2 / (float)param_4;
    *(float *)((longlong)puVar2 + 0x244) = (float)param_3 / (float)param_5;
    puVar2[0x4b] = 0;
    puVar2[0x4a] = 0;
    puVar2[0x4d] = 0;
    puVar2[0x4c] = 0;
    puVar2[0x4f] = 0;
    puVar2[0x4e] = 0;
    puVar2[0x51] = 0;
    puVar2[0x50] = 0;
    *(undefined4 *)(puVar2 + 0x1d) = 2;
    uVar3 = FUN_180084650(puVar2);
    if ((uVar3 & 1) != 0) {
      if (puVar2 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      return puVar2 + 0x1c;
    }
    FUN_180085f18(puVar2);
    FUN_180102fc0(puVar2,0x290);
  }
  return (undefined8 *)0x0;
}

