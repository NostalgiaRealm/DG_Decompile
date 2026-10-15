/*
 * FUN_1001195a at 1001195a
 * undefined4 __thiscall FUN_1001195a(void * this, uint param_1, int param_2, int * param_3, uint param_4)
 * Address ranges: 1001195a-10011ac7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1001195a(void *this,uint param_1,int param_2,int *param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint *puVar7;
  undefined4 uVar8;
  
  uVar8 = 0x8876086c;
  iVar6 = param_2;
  if ((param_1 == 0) && (param_2 == 0)) {
    iVar6 = *(int *)((int)this + 0x10);
  }
  puVar7 = (uint *)(*(int *)((int)this + 0x2c) + -0x58e4);
  if (*(int *)((int)this + 0x2c) == 0) {
    puVar7 = (uint *)&DAT_00000dd0;
  }
  FUN_10003e40((void *)((int)&param_2 + 3),(byte)(*puVar7 >> 2) & 1);
  if ((*(int *)((int)this + 0x40) == 0) ||
     (((*(uint *)((int)this + 0x34) & 0x200) == 0 && (*(char *)((int)this + 0x4b) == '\0')))) {
    bVar2 = FUN_1002b523((int)this);
    if (CONCAT31(extraout_var_00,bVar2) != 0) goto LAB_10011ab7;
    *param_3 = *(int *)((int)this + 4) + param_1;
    FUN_1002b4d1(this,param_1,param_1 + iVar6);
  }
  else {
    iVar6 = *(int *)((int)this + 0x2c);
    pcVar3 = (char *)(iVar6 + -0x66a4);
    if (iVar6 == 0) {
      pcVar3 = &DAT_00000010;
    }
    if (*pcVar3 != '\0') {
      if (*(int *)((int)this + 0xc) == 0) {
        iVar4 = iVar6 + -0x66b4;
        if (iVar6 == 0) {
          iVar4 = 0;
        }
        if (*(void **)(iVar4 + 0x658c) == this) {
          (**(code **)(**(int **)(iVar4 + 0x14) + 0x14))();
        }
        uVar1 = param_4;
        uVar5 = param_4 & 0x3000;
        if (((param_4 & 0x2000) == 0) || (*(char *)((int)this + 0x49) == '\0')) {
LAB_10011a26:
          param_4 = param_4 & 0xffffff00;
        }
        else {
          param_4 = CONCAT31(param_4._1_3_,1);
          if (*(char *)((int)this + 0x4a) != '\0') goto LAB_10011a26;
        }
        iVar6 = (**(code **)(**(int **)((int)this + 0x40) + 0xc))
                          (param_4,uVar5 != 0,(int)this + 0xc);
        if (iVar6 == 0) {
          if (*(char *)((int)this + 0x48) != '\0') {
            puVar7 = (uint *)(*(int *)((int)this + 0x2c) + -0x48);
            if (*(int *)((int)this + 0x2c) == 0) {
              puVar7 = (uint *)&DAT_0000666c;
            }
            *puVar7 = *puVar7 | 1;
          }
          uVar8 = 0;
          *(byte *)((int)this + 0x4a) = (byte)(uVar1 >> 0xd) & 1;
        }
      }
      else {
        uVar8 = 0;
      }
      *param_3 = *(int *)((int)this + 0xc) + param_1;
      goto LAB_10011ab7;
    }
    bVar2 = FUN_1002b523((int)this);
    if (CONCAT31(extraout_var,bVar2) != 0) goto LAB_10011ab7;
    *param_3 = *(int *)((int)this + 4) + param_1;
  }
  uVar8 = 0;
LAB_10011ab7:
  FUN_10003e89((char *)((int)&param_2 + 3));
  return uVar8;
}

