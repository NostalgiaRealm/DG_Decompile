/*
 * FUN_180079240 at 180079240
 * undefined8 __fastcall FUN_180079240(undefined8 param_1, longlong * param_2, longlong * param_3)
 * Address ranges: 180079240-180079439
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180079240(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 local_f8;
  uint uStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  uint local_e8;
  uint local_e4;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  longlong local_b8 [16];
  
  local_f8 = 0x4e475349;
  uStack_f4 = 0;
  local_d0 = 0x210;
  local_f0 = 0;
  local_ec = 8;
  local_c8 = 1;
  local_e0 = (undefined8 *)thunk_FUN_1800fbccc(0x210);
  local_d8 = local_e0;
  FUN_1800edd90((longlong *)&local_e0,(undefined8 *)&local_f8,0x10);
  FUN_1800fbea0((undefined1 *)local_b8,0,0x80);
  uVar7 = param_3[0xa4];
  uVar12 = 0xffffffff;
  uVar10 = 0;
  uVar11 = 0;
  do {
    lVar3 = param_3[2];
    cVar1 = *(char *)(uVar11 + 0x10 + lVar3);
    if (cVar1 == '\0') {
LAB_18007937e:
      if (*(char *)(uVar11 + lVar3) == '0') {
        uVar12 = uVar11;
      }
    }
    else {
      bVar2 = *(byte *)(uVar11 + lVar3);
      if (bVar2 == 0xff) goto LAB_18007937e;
      lVar3 = *param_3;
      if (bVar2 == 0x30) {
        uVar12 = uVar11;
      }
      if (*(int *)(lVar3 + 8) != 0) {
        uVar6 = 0;
        do {
          if (*(byte *)(lVar3 + 0x19 + (ulonglong)*(byte *)(lVar3 + 0x214 + uVar6) * 8) == bVar2) {
            local_f0 = 0;
            uStack_f4 = bVar2 & 0xf;
            local_ec = 3;
            local_e8 = uVar10 & 0xff;
            local_e4 = (uint)(CONCAT11(cVar1,0xf) & 0xfff);
            pbVar5 = (byte *)FUN_180088d0c(bVar2);
            uVar6 = FUN_1800ede70(local_b8,pbVar5);
            local_f8 = (undefined4)uVar6;
            uVar10 = uVar10 + 1;
            FUN_1800edd90((longlong *)&local_e0,(undefined8 *)&local_f8,0x18);
            break;
          }
          uVar9 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(lVar3 + 8));
      }
    }
    uVar9 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar9;
    if (0xf < uVar9) {
      *(undefined4 *)(param_3 + 0xa5) = 0xffffffff;
      if (((int)uVar12 != -1) && ((uVar7 >> 9 & 1) != 0)) {
        local_e8 = uVar10 & 0xff;
        uStack_f4 = 0;
        local_f0 = 0;
        local_ec = 3;
        local_e4 = 0x70f;
        *(uint *)(param_3 + 0xa5) = uVar10;
        uVar7 = FUN_1800ede70(local_b8,(byte *)"NFACT");
        local_f8 = (undefined4)uVar7;
        FUN_1800edd90((longlong *)&local_e0,(undefined8 *)&local_f8,0x18);
        uVar10 = uVar10 + 1;
      }
      FUN_1800ee130((longlong *)&local_e0,uVar10,local_b8);
      puVar4 = local_e0;
      FUN_1800edd90(param_2,local_e0,(longlong)local_d8 - (longlong)local_e0);
      uVar8 = FUN_1800fbcf0(puVar4);
      return CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
    }
  } while( true );
}

