/*
 * FUN_10002c4b at 10002c4b
 * undefined4 __thiscall FUN_10002c4b(void * this, int param_1, int param_2, HWND param_3, int * param_4, int * param_5)
 * Address ranges: 10002c4b-10002fe0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10002c4b(void *this,int param_1,int param_2,HWND param_3,int *param_4,int *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  HWND pHVar4;
  int *piVar5;
  uint *puVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar7;
  undefined4 extraout_ECX_01;
  int extraout_EDX;
  undefined4 uVar8;
  HWND pHVar9;
  uint *puVar10;
  uint local_58 [7];
  uint local_3c [6];
  int local_24;
  uint local_20;
  undefined *local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  char local_c;
  char local_b;
  char local_a;
  char local_9;
  
  uVar8 = 0x8876086c;
  local_10 = this;
  local_14 = FUN_10002220(param_4[2]);
  local_18 = FUN_10002220(param_4[9]);
  local_1c = FUN_100031b7(this,param_2);
  iVar3 = param_4[5];
  if ((((iVar3 == 1) || (iVar3 == 2)) || (iVar3 == 3)) || (local_9 = '\0', iVar3 == 4)) {
    local_9 = '\x01';
  }
  if (((param_4[3] == 0) || (param_4[3] == 1)) || ((iVar3 != 3 && (iVar3 != 4)))) {
    local_a = '\x01';
  }
  else {
    local_a = '\0';
  }
  if ((param_4[10] == 0) || (local_b = '\0', param_4[10] == 1)) {
    local_b = '\x01';
  }
  local_20 = param_4[0xc];
  if ((local_20 == 0) ||
     ((param_4[7] == 0 &&
      ((((local_20 == 0x80000000 || (local_20 == 1)) || (local_20 == 2)) ||
       ((local_20 == 4 || (local_20 == 8)))))))) {
    local_c = '\x01';
  }
  else {
    local_c = '\0';
  }
  uVar2 = FUN_10002709(*(byte **)(local_1c + 0xe8),local_14);
  if ((((char)uVar2 != '\0') && (param_4[4] < 0x11)) &&
     (((uint)param_4[3] < 4 && ((local_9 != '\0' && (local_a != '\0')))))) {
    uVar7 = extraout_ECX;
    if ((param_4[8] != 0) &&
       (uVar2 = FUN_10002709(*(byte **)(local_1c + 0xdc),local_18), uVar7 = extraout_ECX_00,
       (char)uVar2 == '\0')) {
      return 0x8876086c;
    }
    if (((local_b != '\0') && (local_c != '\0')) && ((param_4[4] == 0 || (iVar3 == 1)))) {
      local_24 = param_4[7];
      uVar2 = FUN_10002b5c(param_1,param_2,param_4[2],uVar7,param_4[4],uVar7,1);
      if (-1 < (int)uVar2) {
        if (param_4[8] != 0) {
          iVar3 = FUN_1000209d(local_10,param_2,param_4[2],param_4[2],param_4[9]);
          if (iVar3 < 0) {
            return 0x8876086c;
          }
          uVar2 = FUN_10002b5c(param_1,param_2,param_4[9],extraout_ECX_01,param_4[4],extraout_ECX_01
                               ,1);
          if ((int)uVar2 < 0) {
            return 0x8876086c;
          }
        }
        pHVar9 = (HWND)param_4[6];
        pHVar4 = GetDesktopWindow();
        if ((pHVar9 == pHVar4) || (pHVar9 == (HWND)0x0)) {
          pHVar9 = param_3;
        }
        *param_5 = (int)pHVar9;
        param_5[1] = *param_4;
        param_5[2] = param_4[1];
        param_5[6] = (uint)(byte)(&DAT_100b1680)[local_14];
        param_5[7] = *param_4;
        param_5[8] = param_4[1];
        param_5[0xb] = 1;
        param_5[0xc] = 1;
        if (local_20 == 0x80000000) {
          uVar2 = 0;
        }
        else {
          uVar2 = local_20;
          if (local_20 == 0) {
            uVar2 = (uint)(param_4[7] == 0);
          }
        }
        param_5[0xf] = uVar2;
        param_5[0xe] = param_4[5];
        iVar3 = param_4[3];
        if (iVar3 == 0) {
          iVar3 = 1;
        }
        param_5[0x10] = iVar3;
        param_5[0x13] = param_4[2];
        param_5[0x11] = local_14;
        if (param_4[8] == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = param_4[9];
        }
        param_5[0x14] = iVar3;
        uVar2 = 0x1c;
        if (param_4[8] != 0) {
          uVar2 = local_18;
        }
        param_5[0x12] = uVar2;
        param_5[0x15] = param_4[4];
        param_5[0x16] = 0;
        iVar3 = FUN_100a9bb9((int *)((&DAT_100ba720)[param_1 * 0x8a] + 4));
        param_5[0xd] = iVar3;
        param_5[0x17] = param_1;
        param_5[0x18] = *(int *)((int)&DAT_100ba734 + extraout_EDX);
        param_5[0x19] = *(int *)((int)&DAT_100ba734 + extraout_EDX) + 1;
        param_5[0x1a] = param_4[10];
        *(byte *)(param_5 + 0x1b) = *(byte *)(param_4 + 10) & 1;
        *(bool *)((int)param_5 + 0x6d) = param_4[7] != 0;
        if ((*(char *)(DAT_100ba2b4 + 0x7e5) != '\0') ||
           (uVar1 = 1, *(char *)(DAT_100ba2b4 + 0x784) == '\0')) {
          uVar1 = 0;
        }
        *(undefined1 *)((int)param_5 + 0x6e) = uVar1;
        *(byte *)((int)param_5 + 0x6f) = (byte)(*(uint *)(local_1c + 8) >> 0x11) & 1;
        if (local_24 == 0) {
          piVar5 = FUN_100239aa(param_1,*param_4,param_4[1],param_4[0xb]);
          uVar8 = 0x8876086c;
          if (piVar5 != (int *)0x0) {
            param_5[3] = piVar5[2];
            param_5[4] = piVar5[3];
            param_5[5] = piVar5[4];
            puVar6 = FUN_10023b1e((uint *)(param_5 + 1),param_1,local_58);
            puVar10 = local_3c;
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar10 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar10 = puVar10 + 1;
            }
            puVar6 = local_3c;
            puVar10 = (uint *)(param_5 + 7);
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar10 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar10 = puVar10 + 1;
            }
            if ((param_4[0xb] == 0) && (iVar3 = FUN_10022a31(), (char)iVar3 == '\0')) {
              param_5[9] = *(int *)(&DAT_100ba88c + param_1 * 0x228);
              param_5[10] = *(int *)(&DAT_100ba890 + param_1 * 0x228);
            }
            uVar8 = 0;
          }
        }
        else {
          uVar8 = 0x8876086c;
          if (((param_4[0xb] == 0) && (*param_4 != 0)) && (param_4[1] != 0)) {
            uVar8 = 0;
            param_5[3] = *(int *)(&DAT_100ba8a4 + extraout_EDX);
            param_5[4] = *(int *)(&DAT_100ba8a8 + extraout_EDX);
            param_5[5] = *(int *)(&DAT_100ba8ac + extraout_EDX);
            param_5[9] = *(int *)(&DAT_100ba8a4 + extraout_EDX);
            param_5[10] = *(int *)(&DAT_100ba8a8 + extraout_EDX);
          }
        }
      }
    }
  }
  return uVar8;
}

