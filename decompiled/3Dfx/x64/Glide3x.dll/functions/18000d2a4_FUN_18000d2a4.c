/*
 * FUN_18000d2a4 at 18000d2a4
 * undefined8 __fastcall FUN_18000d2a4(longlong param_1, int * param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18000d2a4-18000d536
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000d2a4(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  
  *(int **)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  lVar2 = FUN_180050728(DAT_18006d9d0,&PTR_s_DGD3D12ROOT_18006d4e0,0);
  *(longlong *)(param_1 + 0x3330) = lVar2;
  uVar3 = 0;
  if (lVar2 == 0) goto LAB_18000d4ef;
  plVar1 = (longlong *)(param_1 + 0x33a8);
  FUN_180060f94((undefined1 *)plVar1,0,0xb8);
  iVar5 = 0xb000;
  if ((*param_2 != 5) && (*param_2 == 6)) {
    iVar5 = 0xc000;
  }
  uVar3 = FUN_180047174(*(LPVOID *)(param_1 + 0x3330),*(uint *)(param_1 + 0x3338),iVar5);
  if ((char)uVar3 == '\0') goto LAB_18000d4ef;
  *(ulonglong *)(param_1 + 0x3340) =
       (ulonglong)*(uint *)(param_1 + 0x3338) * 0x1ac0 + *(longlong *)(param_1 + 0x3330) + 0x900;
  lVar2 = FUN_18000b458(param_1);
  *plVar1 = lVar2;
  if (lVar2 != 0) {
    uVar4 = FUN_18000b7f8(param_1,*(uint *)(param_1 + 0xe8));
    if ((((char)uVar4 != '\0') && (uVar4 = FUN_18000ba1c(param_1), (char)uVar4 != '\0')) &&
       (uVar4 = FUN_18000bcbc(param_1), (char)uVar4 != '\0')) {
      FUN_18000bdc4(param_1);
      FUN_1800113c8(param_1,*(undefined8 *)(param_1 + 0x3330),(longlong)param_2,param_4);
      *(undefined4 *)(param_1 + 0xd850) = *(undefined4 *)(param_1 + 0xa8);
      *(undefined4 *)(param_1 + 0xd854) = *(undefined4 *)(param_1 + 0xac);
      *(undefined8 *)(param_1 + 0xd848) = 0;
      FUN_180049e38(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1518) + 8,'\0');
      FUN_18004a068(*(longlong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                    *(ulonglong *)(param_1 + 0x3360),0,1,0x80);
      uVar4 = FUN_180013ad4((longlong *)(param_1 + 0x3668));
      if ((char)uVar4 != '\0') {
        uVar4 = FUN_180021d90(param_1 + 0x42a0);
        if ((char)uVar4 != '\0') {
          iVar5 = *(int *)((longlong)param_2 + 0x33);
          if (iVar5 == 1) {
LAB_18000d523:
            uVar4 = FUN_180021558(param_1 + 0x4770);
            if ((char)uVar4 != '\0') {
LAB_18000d533:
              return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
            }
          }
          else if (iVar5 == 2) {
            uVar4 = FUN_180021558(param_1 + 0x4770);
            if ((char)uVar4 != '\0') {
              uVar4 = FUN_180021558(param_1 + 0x77b0);
              if ((char)uVar4 != '\0') goto LAB_18000d533;
LAB_18000d4ad:
              FUN_180021660(param_1 + 0x4770);
            }
          }
          else {
            if (iVar5 != 3) goto LAB_18000d523;
            uVar4 = FUN_180021558(param_1 + 0x4770);
            if ((char)uVar4 != '\0') {
              uVar4 = FUN_180021558(param_1 + 0x77b0);
              if ((char)uVar4 != '\0') {
                uVar4 = FUN_180021558(param_1 + 0xa7f0);
                if ((char)uVar4 != '\0') goto LAB_18000d533;
                FUN_180021660(param_1 + 0x77b0);
              }
              goto LAB_18000d4ad;
            }
          }
          FUN_1800217e0(param_1 + 0x42a0);
        }
        FUN_180013c7c((longlong *)(param_1 + 0x3668));
      }
      FUN_18000bec8(param_1);
    }
    (**(code **)(*(longlong *)*plVar1 + 0x10))();
    *plVar1 = 0;
  }
  uVar3 = FUN_180047538(*(longlong *)(param_1 + 0x3330),*(uint *)(param_1 + 0x3338));
LAB_18000d4ef:
  return uVar3 & 0xffffffffffffff00;
}

