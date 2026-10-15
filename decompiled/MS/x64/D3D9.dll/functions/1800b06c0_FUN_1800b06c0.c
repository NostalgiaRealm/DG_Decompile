/*
 * FUN_1800b06c0 at 1800b06c0
 * undefined __fastcall FUN_1800b06c0(longlong param_1, undefined8 param_2, ulonglong param_3)
 * Address ranges: 1800b06c0-1800b0864
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b06c0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  float *pfVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  float fVar5;
  
  iVar2 = (int)param_2;
  fVar5 = (float)param_3;
  uVar4 = param_3 & 0xffffffff;
  if (*(float *)(param_1 + 0x478 + (longlong)iVar2 * 4) == fVar5) {
    return;
  }
  if (iVar2 == 0x9a) {
    if ((*(int *)(param_1 + 0x6890) == 0) || (*(int *)(param_1 + 0x6890) == 0x1002)) {
      if (fVar5 != 7.464998e-10) {
        if (fVar5 == 2.9859992e-09) {
          if (*(char *)(param_1 + 0x6895) == '\0') goto LAB_1800b0837;
LAB_1800b075b:
          uVar3 = 1;
        }
        else {
          if (((fVar5 != 3.630206e+12) || (*(char *)(param_1 + 0x6896) == '\0')) ||
             (*(char *)(param_1 + 0x22) == '\0')) goto LAB_1800b0837;
LAB_1800b0772:
          uVar3 = 2;
        }
LAB_1800b0841:
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x1b8))(*(longlong **)(param_1 + 0x28),uVar3)
        ;
        goto LAB_1800b084e;
      }
      if ((*(char *)(param_1 + 0x6895) != '\0') || (*(char *)(param_1 + 0x6896) != '\0')) {
        uVar3 = 0;
        goto LAB_1800b0841;
      }
    }
LAB_1800b0837:
    uVar3 = 0x9a;
LAB_1800b07a3:
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))
              (*(longlong **)(param_1 + 0x28),uVar3,param_3);
  }
  else {
    if (iVar2 == 0xa6) {
      pfVar1 = (float *)(*(longlong *)(&DAT_00006898 + param_1) + 0xb0);
      if (*pfVar1 <= fVar5 && fVar5 != *pfVar1) {
        uVar4 = (ulonglong)*(uint *)(*(longlong *)(&DAT_00006898 + param_1) + 0xb0);
      }
LAB_1800b07cf:
      fVar5 = (float)uVar4;
    }
    else {
      if (iVar2 == 0xb5) {
        if ((*(int *)(param_1 + 0x6890) == 0) || (*(int *)(param_1 + 0x6890) == 0x10de)) {
          if (fVar5 == 0.0) {
            if ((*(char *)(param_1 + 0x6895) != '\0') || (*(char *)(param_1 + 0x6896) != '\0')) {
              (**(code **)(**(longlong **)(param_1 + 0x28) + 0x1b8))
                        (*(longlong **)(param_1 + 0x28),0);
            }
          }
          else if (fVar5 == 12.082843) {
            if ((*(char *)(param_1 + 0x6896) != '\0') && (*(char *)(param_1 + 0x22) != '\0'))
            goto LAB_1800b0772;
          }
          else if ((fVar5 == 207.32912) && (*(char *)(param_1 + 0x6895) != '\0'))
          goto LAB_1800b075b;
        }
        uVar3 = 0xb5;
        param_3 = uVar4;
        goto LAB_1800b07a3;
      }
      if (iVar2 != 0xb8) goto LAB_1800b07cf;
      if ((*(uint *)(*(longlong *)(&DAT_00006898 + param_1) + 0x1c) & 0x1000000) == 0)
      goto LAB_1800b084e;
      param_2 = 0xb8;
      uVar4 = param_3;
    }
    FUN_18001b37c(param_1,param_2,uVar4);
  }
LAB_1800b084e:
  *(float *)(param_1 + 0x478 + (longlong)iVar2 * 4) = fVar5;
  return;
}

