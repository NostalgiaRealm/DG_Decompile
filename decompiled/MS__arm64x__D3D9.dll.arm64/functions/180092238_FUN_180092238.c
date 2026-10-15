/*
 * FUN_180092238 at 180092238
 * undefined FUN_180092238(void)
 * Address ranges: 180092238-18009250f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180092238(longlong param_1,uint param_2,int param_3)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined4 local_60;
  uint uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  
  if (*(longlong *)(param_1 + 0xd4) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
    uVar5 = (ulonglong)(param_2 + *(int *)(param_1 + 0x3c) * param_3) * 0x20;
    iVar7 = (*__imp_USER32_dll_IsRectEmpty)(*(longlong *)(param_1 + 0xd4) + uVar5 + 0x10);
    if (iVar7 == 0) {
      uVar9 = *(uint *)(param_1 + 0x2c);
      if ((uVar9 - 0x24 & 0xfffffffa) == 0) {
        lVar12 = *(longlong *)(param_1 + 0xd4);
        if (lVar12 != 0) {
          uVar11 = (ulonglong)(param_2 + *(int *)(param_1 + 0x3c) * param_3);
          if ((uVar9 - 0x24 & 0xfffffffa) == 0) {
            iVar7 = *(int *)(&DAT_180231470 + (ulonglong)uVar9 * 4);
            lVar6 = uVar11 * 0x20;
            if (iVar7 == 0x18) {
              iVar7 = 0x20;
            }
            if (*(longlong *)(lVar12 + lVar6) == 0) {
              uVar9 = *(uint *)(param_1 + 0x24) >> (ulonglong)(param_2 & 0x1f);
              if (uVar9 == 0) {
                uVar9 = 1;
              }
              uVar4 = *(uint *)(param_1 + 0x28) >> (ulonglong)(param_2 & 0x1f);
              if (uVar4 == 0) {
                uVar4 = 1;
              }
              *(uint *)(lVar12 + lVar6 + 8) = uVar9 * iVar7 >> 3;
              uVar10 = thunk_FUN_180102f80(*(int *)(lVar6 + *(longlong *)(param_1 + 0xd4) + 8) *
                                           uVar4);
              *(undefined8 *)(*(longlong *)(param_1 + 0xd4) + lVar6) = uVar10;
            }
            plVar1 = (longlong *)(*(longlong *)(param_1 + 0xd4) + lVar6);
            lVar12 = *plVar1;
            uVar9 = *(uint *)(plVar1 + 1);
          }
          else {
            puVar2 = (uint *)(lVar12 + uVar11 * 0x20);
            local_78 = (ulonglong)*puVar2;
            local_80 = 0;
            local_70 = (ulonglong)(puVar2[1] + *puVar2);
            iVar7 = (**(code **)(**(longlong **)(param_1 + 0xc4) + 0x40))
                              (*(longlong **)(param_1 + 0xc4),0,&local_78,&local_80);
            if (iVar7 < 0) {
              return 1;
            }
            puVar2 = (uint *)(*(longlong *)(param_1 + 0xd4) + uVar11 * 0x20);
            uVar9 = puVar2[2];
            lVar12 = local_80 + (ulonglong)*puVar2;
          }
          if (lVar12 != 0) {
            local_68 = 0;
            uStack_5c = *(uint *)(param_1 + 0x24) >> (ulonglong)(param_2 & 0x1f);
            uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1508);
            if (uStack_5c == 0) {
              uStack_5c = 1;
            }
            local_60 = 0;
            local_58 = *(uint *)(param_1 + 0x28) >> (ulonglong)(param_2 & 0x1f);
            if (local_58 == 0) {
              local_58 = 1;
            }
            uStack_54 = 1;
            iVar7 = *(int *)(param_1 + 0x34);
            iVar3 = *(int *)(param_1 + 0x3c);
            uVar8 = FUN_180092c08(param_1,uVar10,*(undefined8 *)(param_1 + 0x74),
                                  param_2 + iVar3 * param_3,*(longlong *)(param_1 + 0x58) + 0x16d0,
                                  &local_68,lVar12,uVar9);
            uVar9 = FUN_180092c08(param_1,uVar10,*(undefined8 *)(param_1 + 0x74),
                                  param_2 + (iVar7 + param_3) * iVar3,
                                  *(longlong *)(param_1 + 0x58) + 0x16d0,&local_68,lVar12,uVar9);
            uVar8 = uVar9 & 0xff & uVar8 & 0xff;
            if ((*(longlong *)(param_1 + 0xd4) != 0) &&
               ((*(int *)(param_1 + 0x2c) - 0x24U & 0xfffffffa) != 0)) {
              puVar2 = (uint *)(*(longlong *)(param_1 + 0xd4) +
                               (ulonglong)(param_2 + *(int *)(param_1 + 0x3c) * param_3) * 0x20);
              local_78 = (ulonglong)*puVar2;
              local_70 = (ulonglong)(puVar2[1] + *puVar2);
              (**(code **)(**(longlong **)(param_1 + 0xc4) + 0x48))
                        (*(longlong **)(param_1 + 0xc4),0,&local_78);
            }
            (*__imp_USER32_dll_SetRectEmpty)(*(longlong *)(param_1 + 0xd4) + (uVar5 | 0x10));
          }
        }
      }
      else {
        uVar8 = FUN_180091fa8(param_1,param_1 + 0x60,param_1 + 0xb0);
      }
    }
  }
  return uVar8;
}

