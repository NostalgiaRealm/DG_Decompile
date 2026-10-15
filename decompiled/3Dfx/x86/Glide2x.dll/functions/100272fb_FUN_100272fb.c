/*
 * FUN_100272fb at 100272fb
 * undefined4 __thiscall FUN_100272fb(void * this, int * param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
 * Address ranges: 100272fb-10027621
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall
FUN_100272fb(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 local_cc [2];
  undefined4 local_c4;
  undefined4 local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined2 local_ae;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_94 [4];
  undefined4 local_84 [6];
  undefined4 local_6c [2];
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  undefined2 local_50;
  undefined2 local_4e;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_34 [7];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_5c = param_2;
  local_54 = param_3;
  local_4c = param_4;
  local_50 = 1;
  local_4e = 1;
  local_48 = 1;
  local_3c = 1;
  local_6c[0] = 3;
  local_64 = 0;
  local_60 = 0;
  local_58 = 0;
  local_44 = 0;
  local_40 = 0;
  iVar3 = FUN_1003ba57((void *)(*(int *)((int)this + 0xa4) + 0x520),*(int *)this,local_6c);
  piVar2 = param_1;
  *param_1 = iVar3;
  uVar4 = 0;
  if (iVar3 != 0) {
    iVar3 = FUN_1003ba57((void *)(*(int *)((int)this + 0xa4) + 0x520),*(int *)this,local_6c);
    piVar2[1] = iVar3;
    if (iVar3 != 0) {
      uVar4 = FUN_1003c2b6(*(void **)(*(int *)((int)this + 0xa8) + 0x15d8),2);
      piVar2[3] = uVar4;
      if (uVar4 != 0xffffffff) {
        uVar4 = FUN_1003c2b6(*(void **)(*(int *)((int)this + 0xa8) + 0x15dc),2);
        piVar2[4] = uVar4;
        if (uVar4 != 0xffffffff) {
          piVar2[6] = param_5;
          local_94[0] = param_5;
          local_94[1] = 4;
          local_94[2] = 0x1688;
          puVar5 = local_84;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
          }
          local_84[0] = 0;
          local_84[2] = 0;
          local_84[3] = 0;
          local_84[1] = 0xffffffff;
          FUN_1003c572(*(void **)(*(int *)((int)this + 0xa8) + 0x15d8),&param_2,piVar2[3],0);
          FUN_1003c572(*(void **)(*(int *)((int)this + 0xa8) + 0x15d8),&param_4,piVar2[3],1);
          piVar1 = *(int **)(*(int *)this * 0x18 + 0x520 + *(int *)((int)this + 0xa4));
          (**(code **)(*piVar1 + 0x48))(piVar1,*piVar2,local_94,param_2);
          piVar1 = *(int **)(*(int *)this * 0x18 + 0x520 + *(int *)((int)this + 0xa4));
          (**(code **)(*piVar1 + 0x48))(piVar1,piVar2[1],local_94,param_4);
          local_34[0] = piVar2[6];
          local_34[1] = 4;
          local_34[4] = 0;
          local_34[5] = 0;
          local_34[2] = 0;
          local_34[3] = 0;
          FUN_1003c572(*(void **)(*(int *)((int)this + 0xa8) + 0x15dc),(int *)&param_1,piVar2[4],0);
          FUN_1003c572(*(void **)(*(int *)((int)this + 0xa8) + 0x15dc),&param_5,piVar2[4],1);
          piVar1 = *(int **)(*(int *)this * 0x18 + 0x520 + *(int *)((int)this + 0xa4));
          (**(code **)(*piVar1 + 0x50))(piVar1,*piVar2,local_34,param_1);
          piVar1 = *(int **)(*(int *)this * 0x18 + 0x520 + *(int *)((int)this + 0xa4));
          (**(code **)(*piVar1 + 0x50))(piVar1,piVar2[1],local_34,param_5);
          local_c = 0;
          uVar4 = param_6 + 0xffU & 0xffffff00;
          local_8 = 0;
          piVar2[7] = uVar4;
          local_bc = uVar4 * param_3;
          local_18 = 4;
          local_14 = 2;
          local_10 = 1;
          local_cc[0] = 1;
          local_c4 = 0x10000;
          local_c0 = 0;
          local_b8 = 0;
          local_b4 = 1;
          local_b0 = 1;
          local_ae = 1;
          local_ac = 0;
          local_a8 = 1;
          local_a4 = 0;
          local_a0 = 1;
          local_9c = 0;
          uVar4 = FUN_1003b91c((void *)(*(int *)((int)this + 0xa4) + 0x520),*(int *)this,&local_18,0
                               ,local_cc,0,local_bc,local_bc,piVar2 + 2);
          if ((char)uVar4 != '\0') {
            return CONCAT31((int3)(uVar4 >> 8),1);
          }
          FUN_1003c3aa(*(void **)(*(int *)((int)this + 0xa8) + 0x15dc),(int *)piVar2[4],2,(int *)0x0
                       ,0,0);
          piVar2[4] = -1;
        }
        FUN_1003c3aa(*(void **)(*(int *)((int)this + 0xa8) + 0x15d8),(int *)piVar2[3],2,(int *)0x0,0
                     ,0);
        piVar2[3] = -1;
      }
      (**(code **)(*(int *)piVar2[1] + 8))((int *)piVar2[1]);
      piVar2[1] = 0;
    }
    uVar4 = (**(code **)(*(int *)*piVar2 + 8))((int *)*piVar2);
    *piVar2 = 0;
  }
  return uVar4 & 0xffffff00;
}

