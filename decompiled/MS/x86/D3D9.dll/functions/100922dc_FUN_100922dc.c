/*
 * FUN_100922dc at 100922dc
 * undefined __thiscall FUN_100922dc(void * this, int param_1, float param_2)
 * Address ranges: 100922dc-10092459
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100922dc(void *this,int param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(float *)((int)this + param_1 * 4 + 0x430) == param_2) {
    return;
  }
  if (param_1 == 0x9a) {
    if ((*(int *)((int)this + 0x66fc) == 0) || (*(int *)((int)this + 0x66fc) == 0x1002)) {
      if (param_2 != 7.464998e-10) {
        if (param_2 == 2.9859992e-09) {
          if (*(char *)((int)this + 0x6701) == '\0') goto LAB_10092438;
LAB_10092369:
          uVar3 = 1;
        }
        else {
          if (((param_2 != 3.630206e+12) || (*(char *)((int)this + 0x6702) == '\0')) ||
             (*(char *)((int)this + 0x12) == '\0')) goto LAB_10092438;
LAB_1009237f:
          uVar3 = 2;
        }
LAB_10092441:
        (**(code **)(**(int **)((int)this + 0x14) + 0xdc))(uVar3);
        goto LAB_1009244c;
      }
      if ((*(char *)((int)this + 0x6701) != '\0') || (*(char *)((int)this + 0x6702) != '\0')) {
        uVar3 = 0;
        goto LAB_10092441;
      }
    }
LAB_10092438:
    uVar3 = 0x9a;
LAB_100923ab:
    (**(code **)(**(int **)((int)this + 0x14) + 0x48))(uVar3,param_2);
  }
  else {
    iVar2 = param_1;
    if (param_1 == 0xa6) {
      pfVar1 = (float *)(*(int *)((int)this + 0x6704) + 0xb0);
      if (*pfVar1 <= param_2 && param_2 != *pfVar1) {
        param_2 = *(float *)(*(int *)((int)this + 0x6704) + 0xb0);
      }
    }
    else {
      if (param_1 == 0xb5) {
        if ((*(int *)((int)this + 0x66fc) == 0) || (*(int *)((int)this + 0x66fc) == 0x10de)) {
          if (param_2 == 0.0) {
            if ((*(char *)((int)this + 0x6701) != '\0') || (*(char *)((int)this + 0x6702) != '\0'))
            {
              (**(code **)(**(int **)((int)this + 0x14) + 0xdc))(0);
            }
          }
          else if (param_2 == 12.082843) {
            if ((*(char *)((int)this + 0x6702) != '\0') && (*(char *)((int)this + 0x12) != '\0'))
            goto LAB_1009237f;
          }
          else if ((param_2 == 207.32912) && (*(char *)((int)this + 0x6701) != '\0'))
          goto LAB_10092369;
        }
        uVar3 = 0xb5;
        goto LAB_100923ab;
      }
      if (param_1 == 0xb8) {
        if ((*(uint *)(*(int *)((int)this + 0x6704) + 0x1c) & 0x1000000) == 0) goto LAB_1009244c;
        iVar2 = 0xb8;
      }
    }
    FUN_10017af7(this,iVar2,(int)param_2);
  }
LAB_1009244c:
  *(float *)((int)this + param_1 * 4 + 0x430) = param_2;
  return;
}

