/*
 * FUN_1400017a4 at 1400017a4
 * undefined __fastcall FUN_1400017a4(longlong * param_1, undefined4 param_2, int param_3, undefined4 param_4, char param_5)
 * Address ranges: 1400017a4-140001b13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400017a4(longlong *param_1,undefined4 param_2,int param_3,undefined4 param_4,char param_5)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  char cVar6;
  uint uVar7;
  HWND hWnd;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  undefined8 local_d8;
  undefined8 uStack_d0;
  uint local_c8;
  CHAR local_b8 [128];
  
  iVar13 = param_3 + -1;
  if (param_3 == 0) {
    iVar13 = 0;
  }
  hWnd = GetDlgItem(*(HWND *)(param_1[1] + 0x18),(int)param_1[2]);
  SendMessageW(hWnd,0x14b,0,0);
  FUN_14000e340(param_1[1],(int)param_1[2],param_1[5],-1);
  if ((char)param_1[6] != '\0') {
    FUN_14000e340(param_1[1],(int)param_1[2],0x140026604,-0xe);
    FUN_14000e340(param_1[1],(int)param_1[2],0x140026608,-0xf);
    FUN_14000e340(param_1[1],(int)param_1[2],0x14002660c,-0x10);
    FUN_14000e340(param_1[1],(int)param_1[2],0x140026610,-8);
    FUN_14000e340(param_1[1],(int)param_1[2],0x140026618,-9);
    FUN_14000e340(param_1[1],(int)param_1[2],0x140026620,-10);
    FUN_14000e340(param_1[1],(int)param_1[2],0x140026628,-0xb);
    FUN_14000e340(param_1[1],(int)param_1[2],0x140026638,-0xc);
    FUN_14000e340(param_1[1],(int)param_1[2],0x140026640,-0xd);
    FUN_14000e340(param_1[1],(int)param_1[2],0x14002664c,-0x12);
    FUN_14000e340(param_1[1],(int)param_1[2],0x140026658,-0x13);
    FUN_14000e340(param_1[1],(int)param_1[2],0x140026668,-0x11);
  }
  iVar2 = *(int *)(*param_1 + 600);
  if (iVar2 != -1) {
    plVar3 = *(longlong **)(*param_1 + 0x210 + (longlong)iVar2 * 8);
    uVar7 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2,iVar13,param_4);
    FUN_140024260((LPVOID)param_1[3]);
    uVar14 = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    if (uVar7 != 0) {
      do {
        local_c8 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        plVar3 = *(longlong **)(*param_1 + 0x210 + (longlong)*(int *)(*param_1 + 600) * 8);
        cVar6 = (**(code **)(*plVar3 + 0x68))(plVar3,param_2,iVar13,param_4,uVar14,&local_d8);
        uVar12 = 0;
        if (cVar6 != '\0') {
          if ((int)param_1[4] != 0) {
            lVar4 = param_1[3];
            do {
              if ((((uint)local_d8 == *(uint *)(lVar4 + uVar12 * 0x14)) &&
                  (local_d8._4_4_ == *(uint *)(lVar4 + 4 + uVar12 * 0x14))) &&
                 ((param_5 == '\0' || (local_c8 == *(uint *)(lVar4 + 0x10 + uVar12 * 0x14)))))
              goto LAB_140001af2;
              uVar10 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar10;
            } while (uVar10 < *(uint *)(param_1 + 4));
          }
          FUN_140001344((longlong)param_1,local_b8,(uint)local_d8,(ulonglong)local_d8._4_4_,
                        -(uint)(param_5 != '\0') & local_c8);
          FUN_14000e340(param_1[1],(int)param_1[2],(LPARAM)local_b8,
                        (ulonglong)*(uint *)(param_1 + 4));
          iVar2 = *(int *)((longlong)param_1 + 0x24);
          if ((int)param_1[4] == iVar2) {
            if (iVar2 == 0) {
              uVar10 = 0x10;
            }
            else {
              uVar10 = iVar2 * 2;
            }
            uVar12 = CONCAT44(0,uVar10);
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar12;
            uVar8 = SUB168(ZEXT816(0x14) * auVar5,0);
            if (SUB168(ZEXT816(0x14) * auVar5,8) != 0) {
              uVar8 = 0xffffffffffffffff;
            }
            puVar9 = (undefined8 *)thunk_FUN_14002423c(uVar8);
            if (puVar9 == (undefined8 *)0x0) goto LAB_140001af2;
            puVar11 = puVar9;
            if (uVar10 != 0) {
              do {
                *puVar11 = 0;
                puVar11[1] = 0;
                *(undefined4 *)(puVar11 + 2) = 0;
                puVar11 = (undefined8 *)((longlong)puVar11 + 0x14);
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
            FUN_140024620(puVar9,(undefined8 *)param_1[3],
                          (ulonglong)*(uint *)((longlong)param_1 + 0x24) * 0x14);
            FUN_140024260((LPVOID)param_1[3]);
            param_1[3] = (longlong)puVar9;
            *(uint *)((longlong)param_1 + 0x24) = uVar10;
          }
          uVar10 = *(uint *)(param_1 + 4);
          lVar4 = param_1[3];
          puVar1 = (undefined4 *)(lVar4 + (ulonglong)uVar10 * 0x14);
          *puVar1 = (uint)local_d8;
          puVar1[1] = local_d8._4_4_;
          puVar1[2] = (undefined4)uStack_d0;
          puVar1[3] = uStack_d0._4_4_;
          *(uint *)(lVar4 + 0x10 + (ulonglong)uVar10 * 0x14) = local_c8;
          *(int *)(param_1 + 4) = (int)param_1[4] + 1;
        }
LAB_140001af2:
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar7);
    }
  }
  return;
}

