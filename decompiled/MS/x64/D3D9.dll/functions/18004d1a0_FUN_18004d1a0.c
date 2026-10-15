/*
 * FUN_18004d1a0 at 18004d1a0
 * undefined8 * __fastcall FUN_18004d1a0(longlong param_1, undefined8 param_2, longlong param_3, undefined8 param_4)
 * Address ranges: 18004d1a0-18004d2de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18004d1a0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  uint local_res8 [8];
  
  uVar1 = *(undefined1 *)(param_1 + 0xaf);
  uVar4 = *(uint *)(param_1 + 0x18);
  lVar6 = *(longlong *)(param_1 + 0xf6d8);
  puVar8 = (undefined8 *)FUN_1800fbccc(0x78);
  puVar11 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    uVar2 = *(undefined1 *)(param_3 + 0x126e);
    uVar3 = *(undefined1 *)(param_3 + 0x126d);
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    *(undefined4 *)(puVar8 + 10) = 0;
    puVar8[8] = lVar6;
    *(uint *)(puVar8 + 9) = uVar4;
    *(undefined1 *)(puVar8 + 0xb) = uVar1;
    *puVar8 = &PTR_FUN_180101cb8;
    puVar8[2] = &PTR_D3DPERF_GetStatus_180102338;
    puVar8[7] = (ulonglong)uVar4 * 0x1ac0 + 0x22d8 + lVar6;
    uVar5 = *(undefined4 *)(lVar6 + 0x38 + (ulonglong)uVar4 * 0x28);
    *puVar8 = &PTR_FUN_180102328;
    puVar8[2] = &PTR_FUN_180102318;
    uVar9 = 0xffff000000000000;
    *(undefined4 *)((longlong)puVar8 + 0x54) = uVar5;
    *(uint *)(puVar8 + 0xc) = (uint)CONCAT11(uVar3,uVar2);
    puVar8[0xd] = param_2;
    puVar8[0xe] = param_4;
    puVar8[1] = param_3;
    local_res8[0] = *(uint *)(param_3 + 0x1214) & 0xffff;
    uVar4 = 0;
    if (local_res8[0] != 0) {
      for (; (local_res8[0] >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    if (local_res8[0] != 0) {
      pbVar7 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar4 >> 3));
      *pbVar7 = *pbVar7 & ~('\x01' << (uVar4 & 7));
      while( true ) {
        uVar10 = 7L << ((char)uVar4 * '\x03' & 0x3fU) | uVar9;
        uVar9 = (uVar9 ^ uVar10) & 0xffff000000000000 ^ uVar10;
        uVar4 = 0;
        if (local_res8[0] != 0) {
          for (; (local_res8[0] >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        if (local_res8[0] == 0) break;
        pbVar7 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar4 >> 3));
        *pbVar7 = *pbVar7 & ~('\x01' << (uVar4 & 7));
      }
    }
    puVar8[3] = uVar9;
    puVar11 = puVar8;
  }
  return puVar11;
}

