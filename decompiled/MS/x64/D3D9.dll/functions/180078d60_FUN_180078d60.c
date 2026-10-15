/*
 * FUN_180078d60 at 180078d60
 * undefined8 __fastcall FUN_180078d60(undefined8 param_1, longlong * param_2, longlong * param_3)
 * Address ranges: 180078d60-180078f16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180078d60(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 local_e8;
  uint uStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  uint local_d8;
  undefined4 local_d4;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  longlong local_a8 [16];
  
  local_e8 = 0x4e47534f;
  uStack_e4 = 0;
  local_c0 = 0x210;
  local_e0 = 0;
  local_dc = 8;
  local_b8 = 1;
  local_d0 = (undefined8 *)thunk_FUN_1800fbccc(0x210);
  local_c8 = local_d0;
  FUN_1800edd90((longlong *)&local_d0,(undefined8 *)&local_e8,0x10);
  FUN_1800fbea0((undefined1 *)local_a8,0,0x80);
  uVar10 = 0;
  lVar3 = 0;
  do {
    lVar9 = lVar3;
    bVar1 = *(byte *)(lVar9 + 0x10 + param_3[2]);
    if (bVar1 != 0) {
      bVar2 = *(byte *)(lVar9 + param_3[2]);
      if ((bVar2 != 0xff) && (lVar3 = *param_3, *(int *)(lVar3 + 8) != 0)) {
        uVar6 = 0;
        do {
          if (*(byte *)(lVar3 + 0x19 + (ulonglong)*(byte *)(lVar3 + 0x214 + uVar6) * 8) == bVar2) {
            local_e0 = 0;
            uStack_e4 = bVar2 & 0xf;
            local_dc = 3;
            local_d8 = uVar10 & 0xff;
            local_d4 = (uint)CONCAT11(~(bVar1 & 0xf),0xf);
            pbVar5 = (byte *)FUN_180088d0c(bVar2);
            uVar6 = FUN_1800ede70(local_a8,pbVar5);
            local_e8 = (undefined4)uVar6;
            uVar10 = uVar10 + 1;
            FUN_1800edd90((longlong *)&local_d0,(undefined8 *)&local_e8,0x18);
            break;
          }
          uVar8 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar8;
        } while (uVar8 < *(uint *)(lVar3 + 8));
      }
    }
    lVar3 = lVar9 + 1;
    if (lVar9 + 1 == 0x10) {
      if (*(char *)((longlong)param_3 + 0x53e) != '\0') {
        local_d8 = uVar10 & 0xff;
        uStack_e4 = 0;
        local_e0 = 0;
        local_dc = 3;
        local_d4 = 0xf80f;
        uVar6 = FUN_1800ede70(local_a8,(byte *)"NFACT");
        local_e8 = (undefined4)uVar6;
        uVar10 = uVar10 + 1;
        FUN_1800edd90((longlong *)&local_d0,(undefined8 *)&local_e8,(ulonglong)((int)lVar9 + 9));
      }
      FUN_1800ee130((longlong *)&local_d0,uVar10,local_a8);
      puVar4 = local_d0;
      FUN_1800edd90(param_2,local_d0,(longlong)local_c8 - (longlong)local_d0);
      uVar7 = FUN_1800fbcf0(puVar4);
      return CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    }
  } while( true );
}

