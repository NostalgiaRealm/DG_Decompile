/*
 * FUN_1800aa1a0 at 1800aa1a0
 * undefined FUN_1800aa1a0(void)
 * Address ranges: 1800aa1a0-1800aa33b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800aa1a0(longlong param_1,int param_2,float param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + (longlong)param_2 * 4;
  if (*(float *)(lVar1 + 0x478) == param_3) {
    return;
  }
  if (param_2 == 0x9a) {
    if (*(int *)(param_1 + 0x6890) == 0 || *(int *)(param_1 + 0x6890) == 0x1002) {
      if (param_3 == (float)0x304d3241) {
        if ((*(char *)(param_1 + 0x6895) != '\0') || (*(char *)(param_1 + 0x6896) != '\0')) {
          uVar2 = 0;
LAB_1800aa310:
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x1b8))
                    (*(longlong **)(param_1 + 0x28),uVar2);
          goto LAB_1800aa290;
        }
      }
      else if (param_3 == (float)0x314d3241) {
LAB_1800aa244:
        if (*(char *)(param_1 + 0x6895) != '\0') {
          uVar2 = 1;
          goto LAB_1800aa310;
        }
      }
      else if (param_3 == (float)0x54534e49) {
LAB_1800aa2fc:
        if ((*(char *)(param_1 + 0x6896) != '\0') && (*(char *)(param_1 + 0x22) != '\0')) {
          uVar2 = 2;
          goto LAB_1800aa310;
        }
      }
    }
LAB_1800aa278:
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))
              (*(longlong **)(param_1 + 0x28),param_2,param_3);
  }
  else {
    if (param_2 == 0xa6) {
      if (*(float *)(*(longlong *)(&DAT_00006898 + param_1) + 0xb0) < param_3) {
        param_3 = *(float *)(*(longlong *)(&DAT_00006898 + param_1) + 0xb0);
      }
    }
    else {
      if (param_2 == 0xb5) {
        if (*(int *)(param_1 + 0x6890) == 0 || *(int *)(param_1 + 0x6890) == 0x10de) {
          if (param_3 == 0.0) {
            if ((*(char *)(param_1 + 0x6895) != '\0') || (*(char *)(param_1 + 0x6896) != '\0')) {
              (**(code **)(**(longlong **)(param_1 + 0x28) + 0x1b8))
                        (*(longlong **)(param_1 + 0x28),0);
            }
          }
          else {
            if (param_3 == (float)0x41415353) goto LAB_1800aa2fc;
            if (param_3 == (float)0x434f5441) goto LAB_1800aa244;
          }
        }
        goto LAB_1800aa278;
      }
      if ((param_2 == 0xb8) &&
         ((*(uint *)(*(longlong *)(&DAT_00006898 + param_1) + 0x1c) >> 0x18 & 1) == 0))
      goto LAB_1800aa290;
    }
    FUN_180010810(param_1,param_2,param_3);
  }
LAB_1800aa290:
  *(float *)(lVar1 + 0x478) = param_3;
  return;
}

