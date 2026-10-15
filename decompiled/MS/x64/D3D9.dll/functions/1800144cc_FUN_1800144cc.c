/*
 * FUN_1800144cc at 1800144cc
 * uint __fastcall FUN_1800144cc(longlong * param_1, longlong * param_2, longlong * param_3, uint param_4, uint param_5)
 * Address ranges: 1800144cc-1800146a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800144cc(longlong *param_1,longlong *param_2,longlong *param_3,uint param_4,uint param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined1 local_58;
  
  uVar11 = 0;
  uVar15 = (ulonglong)param_4;
  uVar12 = 0x8876086c;
  if ((param_3 != (longlong *)0x0) && (param_4 != 0)) {
    uVar12 = *(uint *)(param_1 + 1);
    uVar14 = 0;
    uVar13 = uVar14;
    if (uVar12 != 0) {
      uVar9 = uVar11;
      do {
        uVar13 = (uint)uVar9;
        if ((*(longlong *)(*param_1 + uVar9 * 0x28) == *param_2) &&
           (*(longlong *)(*param_1 + 8 + uVar9 * 0x28) == param_2[1])) break;
        uVar13 = uVar13 + 1;
        uVar9 = (ulonglong)uVar13;
      } while (uVar13 < uVar12);
    }
    if (uVar13 == uVar12) {
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_78 = 0;
      uStack_70 = 0;
      uVar12 = 0x8007000e;
      uVar8 = FUN_1800146a8(param_1,&local_78);
      if ((char)uVar8 != '\0') {
        lVar2 = *param_1;
        lVar6 = *param_2;
        uVar4 = *(undefined4 *)((longlong)param_2 + 4);
        lVar7 = param_2[1];
        uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
        uVar9 = (ulonglong)uVar13;
        *(uint *)(lVar2 + 0x1c + uVar9 * 0x28) = param_5;
        puVar1 = (undefined4 *)(lVar2 + uVar9 * 0x28);
        *puVar1 = (int)lVar6;
        puVar1[1] = uVar4;
        puVar1[2] = (int)lVar7;
        puVar1[3] = uVar5;
        if ((param_5 & 1) == 0) {
          puVar10 = (undefined8 *)thunk_FUN_1800fbccc(uVar15);
          bVar16 = puVar10 != (undefined8 *)0x0;
          *(undefined8 **)(lVar2 + 0x10 + uVar9 * 0x28) = puVar10;
          if (puVar10 != (undefined8 *)0x0) {
            FUN_1800fbec0(puVar10,param_3,uVar15);
            *(uint *)(lVar2 + 0x18 + uVar9 * 0x28) = param_4;
          }
          uVar11 = local_60 >> 0x20;
        }
        else {
          *(longlong **)(lVar2 + 0x10 + uVar9 * 0x28) = param_3;
          *(undefined4 *)(lVar2 + 0x18 + uVar9 * 0x28) = 0;
          (**(code **)(*param_3 + 8))(param_3);
          bVar16 = true;
        }
        uVar12 = ~-(uint)bVar16 & 0x8007000e;
      }
      if ((uVar11 & 1) == 0) {
        FUN_1800fbcf0((LPVOID)0x0);
      }
      else {
        (**(code **)(lRam0000000000000000 + 0x10))();
      }
    }
    else {
      lVar2 = *param_1;
      uVar11 = (ulonglong)uVar13;
      plVar3 = *(longlong **)(lVar2 + 0x10 + uVar11 * 0x28);
      if ((*(byte *)(lVar2 + 0x1c + uVar11 * 0x28) & 1) == 0) {
        FUN_1800fbcf0(plVar3);
      }
      else {
        (**(code **)(*plVar3 + 0x10))();
      }
      *(undefined8 *)(lVar2 + 0x10 + uVar11 * 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x18 + uVar11 * 0x28) = 0;
      puVar10 = (undefined8 *)(lVar2 + uVar11 * 0x28);
      *puVar10 = 0;
      puVar10[1] = 0;
      lVar2 = *param_1;
      lVar6 = *param_2;
      uVar4 = *(undefined4 *)((longlong)param_2 + 4);
      lVar7 = param_2[1];
      uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
      *(uint *)(lVar2 + 0x1c + uVar11 * 0x28) = param_5;
      puVar1 = (undefined4 *)(lVar2 + uVar11 * 0x28);
      *puVar1 = (int)lVar6;
      puVar1[1] = uVar4;
      puVar1[2] = (int)lVar7;
      puVar1[3] = uVar5;
      if ((param_5 & 1) == 0) {
        puVar10 = (undefined8 *)thunk_FUN_1800fbccc(uVar15);
        *(undefined8 **)(lVar2 + 0x10 + uVar11 * 0x28) = puVar10;
        uVar12 = 0x8007000e;
        if (puVar10 != (undefined8 *)0x0) {
          FUN_1800fbec0(puVar10,param_3,uVar15);
          *(uint *)(lVar2 + 0x18 + uVar11 * 0x28) = param_4;
          uVar12 = uVar14;
        }
      }
      else {
        *(longlong **)(lVar2 + 0x10 + uVar11 * 0x28) = param_3;
        *(undefined4 *)(lVar2 + 0x18 + uVar11 * 0x28) = 0;
        (**(code **)(*param_3 + 8))(param_3);
        uVar12 = uVar14;
      }
    }
  }
  return uVar12;
}

