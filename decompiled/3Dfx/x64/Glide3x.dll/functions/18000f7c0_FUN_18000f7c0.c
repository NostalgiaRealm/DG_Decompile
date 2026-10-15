/*
 * FUN_18000f7c0 at 18000f7c0
 * undefined8 __fastcall FUN_18000f7c0(longlong param_1, int * param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18000f7c0-18000f9f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000f7c0(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

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
  lVar3 = FUN_180050728(DAT_18006d9d0,&PTR_s_DGD3D11ROOT_18006d588,0);
  *(longlong *)(param_1 + 0x3330) = lVar3;
  uVar5 = 0;
  if (lVar3 == 0) goto LAB_18000f9a2;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x620));
  *(longlong *)(lVar3 + 0x618) = param_1;
  piVar4 = FUN_180042940(local_48,param_2);
  uVar5 = FUN_18004ca00(*(longlong **)(param_1 + 0x3330),(ulonglong)*(uint *)(param_1 + 0x3338),
                        *piVar4,*(undefined8 *)(piVar4 + 2),piVar4[1],(char)piVar4[4]);
  if ((char)uVar5 != '\0') {
    *(ulonglong *)(param_1 + 0x3340) =
         (ulonglong)*(uint *)(param_1 + 0x3338) * 0x18c0 + *(longlong *)(param_1 + 0x3330) + 0x6b0;
    uVar6 = FUN_18000e2cc(param_1,*(uint *)(param_1 + 0xe8));
    if (((((char)uVar6 != '\0') && (uVar6 = FUN_18000e548(param_1), (char)uVar6 != '\0')) &&
        (uVar6 = FUN_18000e6d4(param_1), (char)uVar6 != '\0')) &&
       (uVar6 = FUN_18000e600(param_1), (char)uVar6 != '\0')) {
      FUN_18000fc88(param_1);
      FUN_1800113c8(param_1,*(undefined8 *)(param_1 + 0x3330),(longlong)param_2,param_4);
      FUN_18000f3a4(param_1);
      uVar6 = FUN_180013ad4((longlong *)(param_1 + 0x35a0));
      if ((char)uVar6 != '\0') {
        uVar6 = FUN_180024204(param_1 + 0x4260);
        if ((char)uVar6 != '\0') {
          iVar1 = *(int *)((longlong)param_2 + 0x33);
          if (iVar1 == 1) {
LAB_18000f9cf:
            cVar2 = FUN_1800238ac(*(longlong *)(param_1 + 0xd940));
            if (cVar2 != '\0') {
LAB_18000f9df:
              LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x3330) + 0x620));
              return CONCAT71((int7)((ulonglong)extraout_RAX_00 >> 8),1);
            }
          }
          else if (iVar1 == 2) {
            cVar2 = FUN_1800238ac(*(longlong *)(param_1 + 0xd940));
            if (cVar2 != '\0') {
              cVar2 = FUN_1800238ac(*(longlong *)(param_1 + 0xd948));
              if (cVar2 != '\0') goto LAB_18000f9df;
LAB_18000f96a:
              FUN_180023338(*(longlong *)(param_1 + 0xd940));
            }
          }
          else {
            if (iVar1 != 3) goto LAB_18000f9cf;
            cVar2 = FUN_1800238ac(*(longlong *)(param_1 + 0xd940));
            if (cVar2 != '\0') {
              cVar2 = FUN_1800238ac(*(longlong *)(param_1 + 0xd948));
              if (cVar2 != '\0') {
                cVar2 = FUN_1800238ac(*(longlong *)(param_1 + 0xd950));
                if (cVar2 != '\0') goto LAB_18000f9df;
                FUN_180023338(*(longlong *)(param_1 + 0xd948));
              }
              goto LAB_18000f96a;
            }
          }
          FUN_1800273b0(param_1 + 0x4260);
        }
        FUN_180013c7c((longlong *)(param_1 + 0x35a0));
      }
      FUN_18000e864(param_1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x3330) + 0x620));
  uVar5 = extraout_RAX;
LAB_18000f9a2:
  return uVar5 & 0xffffffffffffff00;
}

