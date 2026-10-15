/*
 * FUN_10043a4c at 10043a4c
 * undefined4 __thiscall FUN_10043a4c(void * this, uint param_1, RECT * param_2, uint param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, int * param_7, undefined4 * param_8, int param_9)
 * Address ranges: 10043a4c-10043c0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_10043a4c(void *this,uint param_1,RECT *param_2,uint param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int *param_7,undefined4 *param_8,int param_9)

{
  int *piVar1;
  int iVar2;
  BOOL BVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  ushort in_FPUControlWord;
  RECT local_1c;
  uint local_c;
  uint *local_8;
  
  uVar6 = 0x80070057;
  if ((param_2 == (RECT *)0x0) || (param_1 != 0)) {
    uVar6 = 0;
    if ((param_3 & 1) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)((int)this + 0x18);
    }
    if ((param_3 & 6) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 0x28);
    }
    if (((((iVar5 == 0) || (*(char *)(iVar5 + 9) == '\0')) &&
         ((iVar2 == 0 || (*(char *)(iVar2 + 9) == '\0')))) &&
        ((iVar5 == 0 || (*(char *)(iVar5 + 8) == '\0')))) &&
       ((iVar2 == 0 || (*(char *)(iVar2 + 8) == '\0')))) {
      if (((param_3 & 2) == 0) || (*(int *)((int)this + 0x28) != 0)) {
        if (((param_3 & 4) == 0) || (*(char *)((int)this + 0xfc) != '\0')) {
          BVar3 = TryEnterCriticalSection(DAT_1006bbd0);
          if (BVar3 == 0) {
            FUN_1003c603();
          }
          local_8 = &local_c;
          local_c = in_FPUControlWord | 0x80000000;
          if ((in_FPUControlWord & 0xf3f) != 0x23f) {
            local_c = (uint)in_FPUControlWord;
          }
          if (param_7 != (int *)0x0) {
            (**(code **)(*param_7 + 4))(param_7);
            (**(code **)*param_8)();
          }
          local_1c.left = *(int *)((int)this + 0x2c);
          local_1c.top = *(int *)((int)this + 0x30);
          local_1c.right = *(int *)((int)this + 0x34) + local_1c.left;
          local_1c.bottom = *(int *)((int)this + 0x38) + local_1c.top;
          if (param_9 != 0) {
            local_1c.left = *(int *)(param_9 + 4);
            local_1c.top = *(int *)(param_9 + 8);
            local_1c.right = *(int *)(param_9 + 0xc) + local_1c.left;
            local_1c.bottom = *(int *)(param_9 + 0x10) + local_1c.top;
          }
          if (param_8 == (undefined4 *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined4 *)(param_8[1] + 0x50);
          }
          FUN_100087ff(this,param_1,param_2,param_3,param_4,param_5,param_6,&local_1c,uVar4);
          piVar1 = *(int **)((int)this + 0x1514);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
          }
          *(int **)((int)this + 0x1514) = param_7;
          LeaveCriticalSection(DAT_1006bbd0);
        }
        else {
          uVar6 = 0x88760817;
        }
      }
      else {
        uVar6 = 0x88760816;
      }
    }
  }
  return uVar6;
}

