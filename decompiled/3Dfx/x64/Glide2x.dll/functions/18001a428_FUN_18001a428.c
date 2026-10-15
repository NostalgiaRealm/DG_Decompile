/*
 * FUN_18001a428 at 18001a428
 * undefined8 __fastcall FUN_18001a428(longlong param_1, int * param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18001a428-18001a6ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18001a428(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  
  *(int **)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  lVar2 = FUN_18004e11c(DAT_18006c870,&PTR_s_DGD3D12ROOT_18006c3a0,0);
  *(longlong *)(param_1 + 0x31b0) = lVar2;
  uVar3 = 0;
  if (lVar2 == 0) goto LAB_18001a673;
  plVar1 = (longlong *)(param_1 + 0x3228);
  FUN_18005f374((undefined1 *)plVar1,0,0xb8);
  iVar5 = 0xb000;
  if ((*param_2 != 5) && (*param_2 == 6)) {
    iVar5 = 0xc000;
  }
  uVar3 = FUN_180044b68(*(LPVOID *)(param_1 + 0x31b0),*(uint *)(param_1 + 0x31b8),iVar5);
  if ((char)uVar3 == '\0') goto LAB_18001a673;
  *(ulonglong *)(param_1 + 0x31c0) =
       (ulonglong)*(uint *)(param_1 + 0x31b8) * 0x1ac0 + *(longlong *)(param_1 + 0x31b0) + 0x900;
  lVar2 = FUN_1800184f0(param_1);
  *plVar1 = lVar2;
  if (lVar2 != 0) {
    uVar4 = FUN_180018890(param_1,*(uint *)(param_1 + 0xe8));
    if ((((char)uVar4 != '\0') && (uVar4 = FUN_180018ab4(param_1), (char)uVar4 != '\0')) &&
       (uVar4 = FUN_180018d54(param_1), (char)uVar4 != '\0')) {
      FUN_180018e5c(param_1);
      FUN_1800228a8(param_1,*(undefined8 *)(param_1 + 0x31b0),(longlong)param_2,param_4);
      *(undefined4 *)(param_1 + 0xcd30) = *(undefined4 *)(param_1 + 0xa8);
      *(undefined4 *)(param_1 + 0xcd34) = *(undefined4 *)(param_1 + 0xac);
      *(undefined8 *)(param_1 + 0xcd28) = 0;
      FUN_18004782c(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1518) + 8,'\0');
      FUN_180047a5c(*(longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                    *(ulonglong *)(param_1 + 0x31e0),0,1,0x80);
      uVar4 = FUN_180020630((longlong *)(param_1 + 0x34e8));
      if ((char)uVar4 != '\0') {
        uVar4 = FUN_18002f384(param_1 + 0x3b60);
        if ((char)uVar4 != '\0') {
          iVar5 = *(int *)((longlong)param_2 + 0x33);
          if (iVar5 == 1) {
LAB_18001a6a7:
            uVar4 = FUN_18002ebf4(param_1 + 0x3c50);
            if ((char)uVar4 != '\0') {
LAB_18001a6b7:
              return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
            }
          }
          else if (iVar5 == 2) {
            uVar4 = FUN_18002ebf4(param_1 + 0x3c50);
            if ((char)uVar4 != '\0') {
              uVar4 = FUN_18002ebf4(param_1 + 0x6c90);
              if ((char)uVar4 != '\0') goto LAB_18001a6b7;
LAB_18001a631:
              FUN_18002ecfc(param_1 + 0x3c50);
            }
          }
          else {
            if (iVar5 != 3) goto LAB_18001a6a7;
            uVar4 = FUN_18002ebf4(param_1 + 0x3c50);
            if ((char)uVar4 != '\0') {
              uVar4 = FUN_18002ebf4(param_1 + 0x6c90);
              if ((char)uVar4 != '\0') {
                uVar4 = FUN_18002ebf4(param_1 + 0x9cd0);
                if ((char)uVar4 != '\0') goto LAB_18001a6b7;
                FUN_18002ecfc(param_1 + 0x6c90);
              }
              goto LAB_18001a631;
            }
          }
          FUN_18002ee5c(param_1 + 0x3b60);
        }
        FUN_1800207d8((longlong *)(param_1 + 0x34e8));
      }
      FUN_180018f60(param_1);
    }
    (**(code **)(*(longlong *)*plVar1 + 0x10))();
    *plVar1 = 0;
  }
  uVar3 = FUN_180044f2c(*(longlong *)(param_1 + 0x31b0),*(uint *)(param_1 + 0x31b8));
LAB_18001a673:
  return uVar3 & 0xffffffffffffff00;
}

