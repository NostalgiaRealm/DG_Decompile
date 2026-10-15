/*
 * FUN_18002aaf8 at 18002aaf8
 * bool __cdecl FUN_18002aaf8(longlong param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4)
 * Address ranges: 18002aaf8-18002aeb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18002aaf8(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  code *pcVar14;
  longlong lVar15;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80 [4];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  float local_58 [3];
  float fStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  lVar1 = param_1 + (param_2 & 0xffffffff) * 0x180;
  if ((param_3 & 1) != 0) {
    lVar15 = *(longlong *)(param_1 + 0x140);
    uVar4 = *(uint *)(lVar1 + 0x168);
    uVar5 = *(uint *)(lVar1 + 0x16c);
    uVar13 = param_4;
    if (*(char *)(lVar15 + 0x2c83) != '\0') {
      plVar10 = *(longlong **)(*(longlong *)(lVar15 + 0x3340) + 8);
      (**(code **)(*plVar10 + 0xe0))
                (plVar10,*(undefined8 *)
                          (lVar15 + ((ulonglong)*(uint *)(lVar15 + 0x2af0) + 0x33a) * 0x10));
      plVar10 = *(longlong **)(*(longlong *)(lVar15 + 0x3340) + 8);
      (**(code **)(*plVar10 + 0xe0))
                (plVar10,*(undefined8 *)
                          (lVar15 + (ulonglong)*(uint *)(lVar15 + 0x2af0) * 0x10 + 0x33a8));
      *(int *)(lVar15 + 0x2af0) = *(int *)(lVar15 + 0x2af0) + 1;
    }
    cVar7 = *(char *)(lVar1 + 0x1dc);
    lVar15 = 0x150;
    if (cVar7 != '\0') {
      lVar15 = 0x154;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2d34) = *(undefined4 *)(lVar1 + lVar15);
    local_58[0] = 0.0;
    local_58[1] = 0.0;
    local_48 = 0;
    fStack_4c = (float)*(uint *)(lVar1 + 0x16c);
    local_58[2] = (float)*(uint *)(lVar1 + 0x168);
    local_44 = 0x3f800000;
    FUN_180054160(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),local_58);
    *(float *)(*(longlong *)(param_1 + 0x140) + 0x2c90) = (float)*(uint *)(lVar1 + 0x168);
    *(float *)(*(longlong *)(param_1 + 0x140) + 0x2c94) = (float)*(uint *)(lVar1 + 0x16c);
    DAT_18006f744 = 0xf;
    DAT_18006f764 = 0xf;
    DAT_18006f6a4 = 0;
    FUN_180053700(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),
                  (int *)&DAT_18006f720,uVar13,-1);
    lVar15 = *(longlong *)(param_1 + 0x140);
    FUN_1800539b0(*(longlong *)(lVar15 + 0x3330),(ulonglong)*(uint *)(lVar15 + 0x3338),
                  (int *)&DAT_18006f6e8,*(int *)(lVar15 + 0x2b2c));
    FUN_180053c88(*(ulonglong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),
                  (uint *)&DAT_18006f688);
    if (*(longlong *)(lVar1 + 0x218) != *(longlong *)(lVar1 + 0x230)) {
      plVar10 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
      (**(code **)(*plVar10 + 0x1c8))
                (plVar10,*(longlong *)(lVar1 + 0x230),0,*(longlong *)(lVar1 + 0x218),0,
                 *(undefined4 *)(lVar1 + 0x14c));
    }
    local_80[2] = (float)uVar4;
    local_80[0] = 0.0;
    local_80[1] = 0.0;
    uVar6 = *(uint *)(lVar1 + 0x16c);
    bVar8 = *(int *)(lVar1 + 0x1b8) == 1;
    uVar4 = 0;
    if (bVar8) {
      uVar4 = uVar6;
    }
    local_88 = (float)*(uint *)(lVar1 + 0x170) / (float)*(uint *)(lVar1 + 0x168);
    fStack_84 = (float)*(uint *)(lVar1 + 0x174) / (float)uVar6;
    local_80[3] = (float)uVar5;
    local_90 = local_88 * 0.0;
    if (bVar8) {
      uVar5 = uVar6 - uVar5;
    }
    fStack_8c = (float)uVar4 * fStack_84;
    lVar15 = 0x260;
    if (cVar7 != '\0') {
      lVar15 = 0x290;
    }
    local_88 = local_80[2] * local_88;
    lVar2 = 600;
    if (cVar7 != '\0') {
      lVar2 = 0x288;
    }
    fStack_84 = (float)uVar5 * fStack_84;
    lVar3 = 0xbc8;
    if (*(char *)(lVar1 + 400) != '\0') {
      lVar3 = 0xbd0;
    }
    FUN_180028df0(param_1,local_80,&local_90,*(longlong *)(param_1 + lVar3),
                  *(undefined8 *)(lVar1 + 0x238),0,*(undefined8 *)(lVar1 + lVar2),
                  *(undefined8 *)(lVar15 + lVar1),0,0);
    FUN_1800109c0(*(longlong *)(param_1 + 0x140));
    local_80[0] = 0.0;
    local_80[1] = 0.0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c79) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c78) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c7a) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c7b) = 1;
    local_80[3] = *(float *)(lVar1 + 0x168);
    local_70 = *(undefined4 *)(lVar1 + 0x16c);
    uStack_6c = 1;
    local_80[2] = 0.0;
    plVar10 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
    if (*(char *)(lVar1 + 0x191) == '\0') {
      if ((param_4 & 1) == 0) {
        uVar12 = *(undefined8 *)(lVar1 + 0x248);
        uVar11 = *(undefined8 *)(lVar1 + 0x2b8);
      }
      else {
        uVar12 = *(undefined8 *)(lVar1 + 0x278);
        uVar11 = *(undefined8 *)(lVar1 + 0x2c0);
      }
      (**(code **)(*plVar10 + 0x178))(plVar10,uVar11,uVar12);
    }
    else {
      pcVar14 = *(code **)(*plVar10 + 0x170);
      if ((param_4 & 1) == 0) {
        (*pcVar14)(plVar10,*(undefined8 *)(lVar1 + 0x2b8),0,0,0,0,*(undefined8 *)(lVar1 + 0x248),0,
                   local_80);
      }
      else {
        (*pcVar14)(plVar10,*(undefined8 *)(lVar1 + 0x2c0));
      }
    }
  }
  plVar10 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 8);
  iVar9 = (**(code **)(*plVar10 + 0x70))
                    (plVar10,*(undefined8 *)(lVar1 + (param_4 & 0xff) * 8 + 0x2b8),0,3,0,&local_68);
  if (-1 < iVar9) {
    *(undefined8 *)(lVar1 + 0x1c8) = local_68;
    *(undefined4 *)(lVar1 + 0x1d0) = local_60;
  }
  return -1 < iVar9;
}

