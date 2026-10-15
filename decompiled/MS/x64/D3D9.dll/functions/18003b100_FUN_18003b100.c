/*
 * FUN_18003b100 at 18003b100
 * undefined8 * __fastcall FUN_18003b100(longlong param_1, undefined8 param_2, longlong param_3, undefined8 param_4)
 * Address ranges: 18003b100-18003b228
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18003b100(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint local_res8 [8];
  
  uVar1 = *(undefined1 *)(param_1 + 0xaf);
  uVar4 = *(uint *)(param_1 + 0x18);
  lVar5 = *(longlong *)(param_1 + 0xf6d0);
  puVar7 = (undefined8 *)FUN_1800fbccc(0x70);
  puVar9 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    uVar2 = *(undefined1 *)(param_3 + 0x126e);
    uVar3 = *(undefined1 *)(param_3 + 0x126d);
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    *(undefined4 *)((longlong)puVar7 + 0x4c) = 0;
    puVar7[7] = lVar5;
    *(uint *)(puVar7 + 8) = uVar4;
    *(undefined1 *)((longlong)puVar7 + 0x54) = uVar1;
    *puVar7 = &PTR_FUN_180101cb8;
    puVar7[2] = &PTR_D3DPERF_GetStatus_180101cc8;
    *(undefined4 *)(puVar7 + 10) = *(undefined4 *)(lVar5 + 0x38 + (ulonglong)uVar4 * 0x28);
    *puVar7 = &PTR_FUN_180101ca8;
    puVar7[2] = &PTR_FUN_180101c98;
    uVar8 = 0xffff000000000000;
    *(uint *)(puVar7 + 0xb) = (uint)CONCAT11(uVar3,uVar2);
    puVar7[0xc] = param_2;
    puVar7[0xd] = param_4;
    puVar7[1] = param_3;
    local_res8[0] = *(uint *)(param_3 + 0x1214) & 0xffff;
    uVar4 = 0;
    if (local_res8[0] != 0) {
      for (; (local_res8[0] >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    if (local_res8[0] != 0) {
      pbVar6 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar4 >> 3));
      *pbVar6 = *pbVar6 & ~('\x01' << (uVar4 & 7));
      while( true ) {
        uVar10 = 7L << ((char)uVar4 * '\x03' & 0x3fU) | uVar8;
        uVar8 = (uVar8 ^ uVar10) & 0xffff000000000000 ^ uVar10;
        uVar4 = 0;
        if (local_res8[0] != 0) {
          for (; (local_res8[0] >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        if (local_res8[0] == 0) break;
        pbVar6 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar4 >> 3));
        *pbVar6 = *pbVar6 & ~('\x01' << (uVar4 & 7));
      }
    }
    puVar7[3] = uVar8;
    puVar9 = puVar7;
  }
  return puVar9;
}

