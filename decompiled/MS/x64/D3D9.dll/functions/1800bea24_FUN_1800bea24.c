/*
 * FUN_1800bea24 at 1800bea24
 * longlong __fastcall FUN_1800bea24(longlong param_1, ulonglong param_2, byte * param_3, uint param_4, undefined8 * param_5)
 * Address ranges: 1800bea24-1800bed56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800bea24(longlong param_1,ulonglong param_2,byte *param_3,uint param_4,
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
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong local_res10;
  byte *local_res18;
  uint local_res20;
  ulonglong local_8d8;
  longlong local_8d0;
  undefined8 *local_8c8;
  undefined2 local_8c0 [1026];
  undefined1 local_bc [36];
  undefined1 local_98 [36];
  uint local_74;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  uVar18 = CONCAT44(0,param_4);
  uVar17 = 0;
  uVar14 = 0;
  if (param_4 != 0) {
    do {
      lVar11 = uVar14 * 4;
      uVar12 = (uint)uVar14;
      uVar16 = uVar12 + 1;
      uVar14 = (ulonglong)uVar16;
      uVar17 = uVar17 + ((ulonglong)*(uint *)(param_3 + lVar11) << (sbyte)((uVar12 & 1) << 5));
    } while (uVar16 < param_4);
  }
  uVar12 = *(uint *)(param_1 + 0x10);
  local_res10 = param_2;
  local_res18 = param_3;
  if (uVar12 != 0) {
    lVar11 = *(longlong *)(param_1 + 8);
    uVar16 = 0;
    uVar13 = uVar12;
    do {
      uVar4 = uVar13 + uVar16 >> 1;
      uVar14 = *(ulonglong *)(lVar11 + (ulonglong)uVar4 * 0x18);
      uVar3 = uVar4;
      if (uVar14 <= uVar17) {
        if (uVar17 <= uVar14) break;
        uVar16 = uVar4 + 1;
        uVar3 = uVar13;
        uVar4 = uVar16;
      }
      uVar13 = uVar3;
    } while (uVar13 != uVar16);
    if (((uVar4 != uVar12) && (*(ulonglong *)(lVar11 + (ulonglong)uVar4 * 0x18) == uVar17)) &&
       (plVar1 = (longlong *)(lVar11 + 0x10 + (ulonglong)uVar4 * 0x18), plVar1 != (longlong *)0x0))
    {
      local_res20 = *(uint *)((longlong *)*plVar1 + 1);
      if (local_res20 != 0) {
        lVar11 = *(longlong *)*plVar1;
        uVar14 = 0;
        do {
          uVar12 = (uint)uVar14;
          puVar15 = (ulonglong *)(uVar14 * 0x888 + lVar11);
          if ((*(uint *)((longlong)puVar15 + 0x864) == param_4) &&
             (iVar5 = FUN_1800fbe7c(param_3,(byte *)puVar15[0x10d],uVar18 << 2),
             param_3 = local_res18, iVar5 == 0)) {
            *puVar15 = local_res10;
            lVar11 = FUN_1800bf96c((longlong *)(param_1 + 0x20),&local_res10,puVar15);
            plVar1 = (longlong *)*plVar1;
            uVar16 = *(uint *)(plVar1 + 1);
            if (uVar12 < uVar16) {
              while( true ) {
                uVar13 = uVar12 + 1;
                if (uVar16 <= uVar13) break;
                FUN_1800fbec0((undefined8 *)((ulonglong)uVar12 * 0x888 + *plVar1),
                              (undefined8 *)((ulonglong)uVar13 * 0x888 + *plVar1),0x888);
                uVar16 = *(uint *)(plVar1 + 1);
                uVar12 = uVar13;
              }
              *(uint *)(plVar1 + 1) = uVar16 - 1;
            }
            if (lVar11 + 8 != 0) {
              return lVar11 + 8;
            }
            break;
          }
          uVar14 = (ulonglong)(uVar12 + 1);
        } while (uVar12 + 1 < local_res20);
      }
    }
  }
  lVar11 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar18;
  uVar6 = SUB168(ZEXT816(4) * auVar2,0);
  if (SUB168(ZEXT816(4) * auVar2,8) != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  puVar7 = (undefined8 *)thunk_FUN_1800fbccc(uVar6);
  puVar8 = (undefined8 *)FUN_1800fbccc(0x4a70);
  puVar9 = (undefined1 *)0x0;
  if ((puVar7 != (undefined8 *)0x0) && (puVar8 != (undefined8 *)0x0)) {
    puVar9 = FUN_180012514(*(undefined8 *)(param_1 + 0x18),(longlong)local_res18,(longlong)param_5);
    if (puVar9 == (undefined1 *)0x0) {
      lVar10 = 0;
    }
    else {
      FUN_1800fbec0(puVar7,(undefined8 *)local_res18,uVar18 << 2);
      FUN_1800fbec0(puVar8,param_5,0x4a70);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x28);
      lVar10 = (**(code **)(*plVar1 + 0x108))(plVar1,puVar7,puVar8,0);
    }
    if (lVar10 != 0) {
      local_8d8 = local_res10;
      local_60 = 0;
      local_8c0[0] = 0xffff;
      local_8d0 = lVar10;
      local_8c8 = puVar8;
      local_74 = param_4;
      local_70 = puVar7;
      local_68 = puVar9;
      local_58 = uVar17;
      FUN_180006f1c(lVar10,(longlong)param_5 + 0x44f,(longlong)local_8c0,0x400);
      uVar12 = 0x10;
      FUN_180006f1c(lVar10,(longlong)param_5 + 0x48c5,(longlong)local_bc,0x10);
      FUN_180006f1c(lVar10,(longlong)(param_5 + 0x93b),(longlong)local_98,uVar12);
      lVar11 = FUN_1800bf96c((longlong *)(param_1 + 0x20),&local_res10,&local_8d8);
      lVar11 = lVar11 + 8;
    }
    if (lVar11 != 0) {
      return lVar11;
    }
  }
  FUN_1800fbcf0(puVar9);
  FUN_1800fbcf0(puVar7);
  FUN_1800fbcf0(puVar8);
  return 0;
}

