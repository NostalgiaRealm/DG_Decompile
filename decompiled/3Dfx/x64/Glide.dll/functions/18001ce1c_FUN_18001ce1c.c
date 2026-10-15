/*
 * FUN_18001ce1c at 18001ce1c
 * undefined8 __fastcall FUN_18001ce1c(longlong param_1, int * param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18001ce1c-18001d052
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18001ce1c(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

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
  lVar3 = FUN_18004e5c4(DAT_18006c870,&PTR_s_DGD3D11ROOT_18006c448,0);
  *(longlong *)(param_1 + 0x31b0) = lVar3;
  uVar5 = 0;
  if (lVar3 == 0) goto LAB_18001cffe;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x620));
  *(longlong *)(lVar3 + 0x618) = param_1;
  piVar4 = FUN_1800407e4(local_48,param_2);
  uVar5 = FUN_18004a89c(*(longlong **)(param_1 + 0x31b0),(ulonglong)*(uint *)(param_1 + 0x31b8),
                        *piVar4,*(undefined8 *)(piVar4 + 2),piVar4[1],(char)piVar4[4]);
  if ((char)uVar5 != '\0') {
    *(ulonglong *)(param_1 + 0x31c0) =
         (ulonglong)*(uint *)(param_1 + 0x31b8) * 0x18c0 + *(longlong *)(param_1 + 0x31b0) + 0x6b0;
    uVar6 = FUN_18001b8ec(param_1,*(uint *)(param_1 + 0xe8));
    if (((((char)uVar6 != '\0') && (uVar6 = FUN_18001bb68(param_1), (char)uVar6 != '\0')) &&
        (uVar6 = FUN_18001bcf4(param_1), (char)uVar6 != '\0')) &&
       (uVar6 = FUN_18001bc20(param_1), (char)uVar6 != '\0')) {
      FUN_18001d2e4(param_1);
      FUN_180022d50(param_1,*(undefined8 *)(param_1 + 0x31b0),(longlong)param_2,param_4);
      FUN_18001c9b8(param_1);
      uVar6 = FUN_180020ad8((longlong *)(param_1 + 0x3420));
      if ((char)uVar6 != '\0') {
        uVar6 = FUN_180031c30(param_1 + 0x3ae0);
        if ((char)uVar6 != '\0') {
          iVar1 = *(int *)((longlong)param_2 + 0x33);
          if (iVar1 == 1) {
LAB_18001d02b:
            cVar2 = FUN_1800312fc(*(longlong *)(param_1 + 0xcf90));
            if (cVar2 != '\0') {
LAB_18001d03b:
              LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
              return CONCAT71((int7)((ulonglong)extraout_RAX_00 >> 8),1);
            }
          }
          else if (iVar1 == 2) {
            cVar2 = FUN_1800312fc(*(longlong *)(param_1 + 0xcf90));
            if (cVar2 != '\0') {
              cVar2 = FUN_1800312fc(*(longlong *)(param_1 + 0xcf98));
              if (cVar2 != '\0') goto LAB_18001d03b;
LAB_18001cfc6:
              FUN_180030d88(*(longlong *)(param_1 + 0xcf90));
            }
          }
          else {
            if (iVar1 != 3) goto LAB_18001d02b;
            cVar2 = FUN_1800312fc(*(longlong *)(param_1 + 0xcf90));
            if (cVar2 != '\0') {
              cVar2 = FUN_1800312fc(*(longlong *)(param_1 + 0xcf98));
              if (cVar2 != '\0') {
                cVar2 = FUN_1800312fc(*(longlong *)(param_1 + 0xcfa0));
                if (cVar2 != '\0') goto LAB_18001d03b;
                FUN_180030d88(*(longlong *)(param_1 + 0xcf98));
              }
              goto LAB_18001cfc6;
            }
          }
          FUN_180034c9c(param_1 + 0x3ae0);
        }
        FUN_180020c80((longlong *)(param_1 + 0x3420));
      }
      FUN_18001be84(param_1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x31b0) + 0x620));
  uVar5 = extraout_RAX;
LAB_18001cffe:
  return uVar5 & 0xffffffffffffff00;
}

