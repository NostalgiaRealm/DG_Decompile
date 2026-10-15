/*
 * FUN_1800368d8 at 1800368d8
 * bool __cdecl FUN_1800368d8(longlong param_1, ulonglong param_2, ulonglong param_3, ulonglong param_4)
 * Address ranges: 1800368d8-180036c93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800368d8(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

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
    if (*(char *)(lVar15 + 0x2beb) != '\0') {
      plVar10 = *(longlong **)(*(longlong *)(lVar15 + 0x31c0) + 8);
      (**(code **)(*plVar10 + 0xe0))
                (plVar10,*(undefined8 *)
                          (lVar15 + ((ulonglong)*(uint *)(lVar15 + 0x2a58) + 0x322) * 0x10));
      plVar10 = *(longlong **)(*(longlong *)(lVar15 + 0x31c0) + 8);
      (**(code **)(*plVar10 + 0xe0))
                (plVar10,*(undefined8 *)
                          (lVar15 + (ulonglong)*(uint *)(lVar15 + 0x2a58) * 0x10 + 0x3228));
      *(int *)(lVar15 + 0x2a58) = *(int *)(lVar15 + 0x2a58) + 1;
    }
    cVar7 = *(char *)(lVar1 + 0x1dc);
    lVar15 = 0x150;
    if (cVar7 != '\0') {
      lVar15 = 0x154;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2c94) = *(undefined4 *)(lVar1 + lVar15);
    local_58[0] = 0.0;
    local_58[1] = 0.0;
    local_48 = 0;
    fStack_4c = (float)*(uint *)(lVar1 + 0x16c);
    local_58[2] = (float)*(uint *)(lVar1 + 0x168);
    local_44 = 0x3f800000;
    FUN_180051420(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8),local_58);
    *(float *)(*(longlong *)(param_1 + 0x140) + 0x2bf0) = (float)*(uint *)(lVar1 + 0x168);
    *(float *)(*(longlong *)(param_1 + 0x140) + 0x2bf4) = (float)*(uint *)(lVar1 + 0x16c);
    DAT_18006c5f4 = 0xf;
    DAT_18006c614 = 0xf;
    DAT_18006c554 = 0;
    FUN_1800509c0(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8),
                  (int *)&DAT_18006c5d0,uVar13,-1);
    lVar15 = *(longlong *)(param_1 + 0x140);
    FUN_180050c70(*(longlong *)(lVar15 + 0x31b0),(ulonglong)*(uint *)(lVar15 + 0x31b8),
                  (int *)&DAT_18006c598,*(int *)(lVar15 + 0x2a94));
    FUN_180050f48(*(ulonglong *)(*(longlong *)(param_1 + 0x140) + 0x31b0),
                  (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8),
                  (uint *)&DAT_18006c538);
    if (*(longlong *)(lVar1 + 0x218) != *(longlong *)(lVar1 + 0x230)) {
      plVar10 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 8);
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
    lVar3 = 0x5c8;
    if (*(char *)(lVar1 + 400) != '\0') {
      lVar3 = 0x5d0;
    }
    FUN_180034c38(param_1,local_80,&local_90,*(longlong *)(param_1 + lVar3),
                  *(undefined8 *)(lVar1 + 0x238),0,*(undefined8 *)(lVar1 + lVar2),
                  *(undefined8 *)(lVar15 + lVar1),0,0);
    FUN_18001d270(*(longlong *)(param_1 + 0x140));
    local_80[0] = 0.0;
    local_80[1] = 0.0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be1) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be0) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be2) = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be3) = 1;
    local_80[3] = *(float *)(lVar1 + 0x168);
    local_70 = *(undefined4 *)(lVar1 + 0x16c);
    uStack_6c = 1;
    local_80[2] = 0.0;
    plVar10 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 8);
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
  plVar10 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 8);
  iVar9 = (**(code **)(*plVar10 + 0x70))
                    (plVar10,*(undefined8 *)(lVar1 + (param_4 & 0xff) * 8 + 0x2b8),0,3,0,&local_68);
  if (-1 < iVar9) {
    *(undefined8 *)(lVar1 + 0x1c8) = local_68;
    *(undefined4 *)(lVar1 + 0x1d0) = local_60;
  }
  return -1 < iVar9;
}

