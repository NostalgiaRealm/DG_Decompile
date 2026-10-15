/*
 * FUN_18001c97c at 18001c97c
 * undefined8 __fastcall FUN_18001c97c(longlong param_1, int * param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18001c97c-18001cbb2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18001c97c(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined4 local_48 [10];
  
  *(int **)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  lVar3 = FUN_18004e11c(DAT_18006c870,&PTR_s_DGD3D11ROOT_18006c448,0);
  *(longlong *)(param_1 + 0x31b0) = lVar3;
  uVar5 = 0;
  if (lVar3 == 0) goto LAB_18001cb5e;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x620));
  *(longlong *)(lVar3 + 0x618) = param_1;
  piVar4 = FUN_18004033c(local_48,param_2);
  uVar5 = FUN_18004a3f4(*(longlong **)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),
                        *piVar4,*(undefined8 *)(piVar4 + 2),piVar4[1],(char)piVar4[4]);
  if ((char)uVar5 != '\0') {
    *(ulonglong *)(param_1 + 0x31c0) =
         (ulonglong)*(uint *)(param_1 + 0x31b8) * 0x18c0 + *(longlong *)(param_1 + 0x31b0) + 0x6b0;
    uVar6 = FUN_18001b44c(param_1,*(uint *)(param_1 + 0xe8));
    if (((((char)uVar6 != '\0') && (uVar6 = FUN_18001b6c8(param_1), (char)uVar6 != '\0')) &&
        (uVar6 = FUN_18001b854(param_1), (char)uVar6 != '\0')) &&
       (uVar6 = FUN_18001b780(param_1), (char)uVar6 != '\0')) {
      FUN_18001ce44(param_1);
      FUN_1800228a8(param_1,*(undefined8 *)(param_1 + 0x31b0),(longlong)param_2,param_4);
      FUN_18001c518(param_1);
      uVar6 = FUN_180020630((longlong *)(param_1 + 0x3420));
      if ((char)uVar6 != '\0') {
        uVar6 = FUN_180031788(param_1 + 0x3ae0);
        if ((char)uVar6 != '\0') {
          iVar1 = *(int *)((longlong)param_2 + 0x33);
          if (iVar1 == 1) {
LAB_18001cb8b:
            cVar2 = FUN_180030e54(*(longlong *)(param_1 + 0xcf90));
            if (cVar2 != '\0') {
LAB_18001cb9b:
              LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
              return CONCAT71((int7)((ulonglong)extraout_RAX_00 >> 8),1);
            }
          }
          else if (iVar1 == 2) {
            cVar2 = FUN_180030e54(*(longlong *)(param_1 + 0xcf90));
            if (cVar2 != '\0') {
              cVar2 = FUN_180030e54(*(longlong *)(param_1 + 0xcf98));
              if (cVar2 != '\0') goto LAB_18001cb9b;
LAB_18001cb26:
              FUN_1800308e0(*(longlong *)(param_1 + 0xcf90));
            }
          }
          else {
            if (iVar1 != 3) goto LAB_18001cb8b;
            cVar2 = FUN_180030e54(*(longlong *)(param_1 + 0xcf90));
            if (cVar2 != '\0') {
              cVar2 = FUN_180030e54(*(longlong *)(param_1 + 0xcf98));
              if (cVar2 != '\0') {
                cVar2 = FUN_180030e54(*(longlong *)(param_1 + 0xcfa0));
                if (cVar2 != '\0') goto LAB_18001cb9b;
                FUN_1800308e0(*(longlong *)(param_1 + 0xcf98));
              }
              goto LAB_18001cb26;
            }
          }
          FUN_1800347f4(param_1 + 0x3ae0);
        }
        FUN_1800207d8((longlong *)(param_1 + 0x3420));
      }
      FUN_18001b9e4(param_1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
  uVar5 = extraout_RAX;
LAB_18001cb5e:
  return uVar5 & 0xffffffffffffff00;
}

