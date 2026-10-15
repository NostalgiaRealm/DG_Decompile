/*
 * FUN_1800befb4 at 1800befb4
 * longlong __fastcall FUN_1800befb4(longlong param_1, ulonglong param_2, byte * param_3, uint param_4, undefined8 * param_5)
 * Address ranges: 1800befb4-1800bf329
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800befb4(longlong param_1,ulonglong param_2,byte *param_3,uint param_4,
                      undefined8 *param_5)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong local_res10;
  byte *local_res18;
  ulonglong local_278;
  longlong local_270;
  undefined8 *local_268;
  undefined1 local_260 [452];
  undefined1 local_9c [36];
  undefined1 local_78 [36];
  uint local_54;
  undefined8 *local_50;
  ulonglong local_48;
  
  uVar19 = CONCAT44(0,param_4);
  uVar18 = 0;
  uVar12 = 0;
  if (param_4 != 0) {
    do {
      lVar10 = uVar12 * 4;
      uVar16 = (uint)uVar12;
      uVar17 = uVar16 + 1;
      uVar12 = (ulonglong)uVar17;
      uVar18 = uVar18 + ((ulonglong)*(uint *)(param_3 + lVar10) << (sbyte)((uVar16 & 1) << 5));
    } while (uVar17 < param_4);
  }
  uVar16 = *(uint *)(param_1 + 0x10);
  local_res10 = param_2;
  local_res18 = param_3;
  if (uVar16 != 0) {
    lVar10 = *(longlong *)(param_1 + 8);
    uVar17 = 0;
    uVar13 = uVar16;
    do {
      uVar4 = uVar13 + uVar17 >> 1;
      uVar12 = *(ulonglong *)(lVar10 + (ulonglong)uVar4 * 0x18);
      uVar3 = uVar4;
      if (uVar12 <= uVar18) {
        if (uVar18 <= uVar12) break;
        uVar17 = uVar4 + 1;
        uVar3 = uVar13;
        uVar4 = uVar17;
      }
      uVar13 = uVar3;
    } while (uVar13 != uVar17);
    if (((uVar4 != uVar16) && (*(ulonglong *)(lVar10 + (ulonglong)uVar4 * 0x18) == uVar18)) &&
       (plVar1 = (longlong *)(lVar10 + 0x10 + (ulonglong)uVar4 * 0x18), plVar1 != (longlong *)0x0))
    {
      uVar16 = *(uint *)((longlong *)*plVar1 + 1);
      if (uVar16 != 0) {
        lVar10 = *(longlong *)*plVar1;
        uVar12 = 0;
        do {
          uVar17 = (uint)uVar12;
          puVar14 = (ulonglong *)(uVar12 * 0x238 + lVar10);
          if ((*(uint *)((longlong)puVar14 + 0x224) == param_4) &&
             (iVar5 = FUN_1800fbe7c(param_3,(byte *)puVar14[0x45],uVar19 << 2), uVar12 = local_res10
             , param_3 = local_res18, iVar5 == 0)) {
            (**(code **)(*(longlong *)puVar14[1] + 8))((longlong *)puVar14[1],local_res10);
            *puVar14 = uVar12;
            lVar10 = FUN_1800bf740((longlong *)(param_1 + 0x20),&local_res10,puVar14);
            plVar1 = (longlong *)*plVar1;
            uVar16 = *(uint *)(plVar1 + 1);
            if (uVar17 < uVar16) {
              uVar17 = uVar17 + 1;
              if (uVar17 < uVar16) {
                do {
                  lVar9 = 4;
                  puVar7 = (undefined8 *)((ulonglong)uVar17 * 0x238 + *plVar1);
                  puVar8 = (undefined8 *)((ulonglong)(uVar17 - 1) * 0x238 + *plVar1);
                  do {
                    puVar15 = puVar8;
                    puVar11 = puVar7;
                    uVar6 = puVar11[1];
                    *puVar15 = *puVar11;
                    puVar15[1] = uVar6;
                    uVar6 = puVar11[3];
                    puVar15[2] = puVar11[2];
                    puVar15[3] = uVar6;
                    uVar6 = puVar11[5];
                    puVar15[4] = puVar11[4];
                    puVar15[5] = uVar6;
                    uVar6 = puVar11[7];
                    puVar15[6] = puVar11[6];
                    puVar15[7] = uVar6;
                    uVar6 = puVar11[9];
                    puVar15[8] = puVar11[8];
                    puVar15[9] = uVar6;
                    uVar6 = puVar11[0xb];
                    puVar15[10] = puVar11[10];
                    puVar15[0xb] = uVar6;
                    uVar6 = puVar11[0xd];
                    puVar15[0xc] = puVar11[0xc];
                    puVar15[0xd] = uVar6;
                    uVar6 = puVar11[0xf];
                    puVar15[0xe] = puVar11[0xe];
                    puVar15[0xf] = uVar6;
                    lVar9 = lVar9 + -1;
                    puVar7 = puVar11 + 0x10;
                    puVar8 = puVar15 + 0x10;
                  } while (lVar9 != 0);
                  uVar6 = puVar11[0x11];
                  uVar17 = uVar17 + 1;
                  puVar15[0x10] = puVar11[0x10];
                  puVar15[0x11] = uVar6;
                  uVar6 = puVar11[0x13];
                  puVar15[0x12] = puVar11[0x12];
                  puVar15[0x13] = uVar6;
                  uVar6 = puVar11[0x15];
                  puVar15[0x14] = puVar11[0x14];
                  puVar15[0x15] = uVar6;
                  puVar15[0x16] = puVar11[0x16];
                  uVar16 = *(uint *)(plVar1 + 1);
                } while (uVar17 < uVar16);
              }
              *(uint *)(plVar1 + 1) = uVar16 - 1;
            }
            if (lVar10 + 8 != 0) {
              return lVar10 + 8;
            }
            break;
          }
          uVar12 = (ulonglong)(uVar17 + 1);
        } while (uVar17 + 1 < uVar16);
      }
    }
  }
  lVar10 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar19;
  uVar6 = SUB168(ZEXT816(4) * auVar2,0);
  if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  puVar7 = (undefined8 *)thunk_FUN_1800fbccc(uVar6);
  puVar8 = (undefined8 *)0x0;
  if ((puVar7 != (undefined8 *)0x0) &&
     (puVar8 = (undefined8 *)FUN_1800fbccc(0x1270), puVar8 != (undefined8 *)0x0)) {
    FUN_1800fbec0(puVar7,(undefined8 *)local_res18,uVar19 * 4);
    FUN_1800fbec0(puVar8,param_5,0x1270);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x28);
    lVar9 = (**(code **)(*plVar1 + 0x110))(plVar1,puVar7,puVar8,local_res10);
    if (lVar9 != 0) {
      local_278 = local_res10;
      uVar12 = local_res10;
      local_270 = lVar9;
      local_268 = puVar8;
      local_54 = param_4;
      local_50 = puVar7;
      local_48 = uVar18;
      FUN_180006f1c(local_res10,(longlong)param_5 + 0x331,(longlong)local_260,0xe0);
      uVar16 = 0x10;
      FUN_180006f1c(uVar12,(longlong)(param_5 + 0x32),(longlong)local_9c,0x10);
      FUN_180006f1c(uVar12,(longlong)(param_5 + 0x54),(longlong)local_78,uVar16);
      lVar10 = FUN_1800bf740((longlong *)(param_1 + 0x20),&local_res10,&local_278);
      lVar10 = lVar10 + 8;
    }
  }
  if (lVar10 == 0) {
    FUN_1800fbcf0(puVar7);
    FUN_1800fbcf0(puVar8);
  }
  return lVar10;
}

