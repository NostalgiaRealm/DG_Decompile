/*
 * FUN_10045bc6 at 10045bc6
 * undefined __thiscall FUN_10045bc6(void * this, char param_1)
 * Address ranges: 10045bc6-10045d6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10045bc6(void *this,char param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  
  if (((*(char *)((int)this + 0xf66d) == '\0') && (*(char *)((int)this + 0xf6a1) == '\0')) &&
     (param_1 == '\0')) {
    return;
  }
  piVar6 = *(int **)((int)this + 0xfa80);
  piVar1 = (int *)((int)this + 0xfa90);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)*piVar1;
    fVar8 = 1.0;
    fVar7 = 1.0;
    if (piVar6 == (int *)0x0) goto LAB_10045ca1;
  }
  iVar4 = piVar6[5];
  iVar3 = (**(code **)(*piVar6 + 0x20))(0);
  iVar2 = piVar6[6];
  local_8 = (float)((double)iVar3 + (double)(&DAT_100d97a0)[-(iVar3 >> 0x1f)]) /
            (float)((double)iVar4 + (double)(&DAT_100d97a0)[-(iVar4 >> 0x1f)]);
  iVar4 = (**(code **)(*piVar6 + 0x24))(0);
  fVar8 = (float)((double)iVar4 + (double)(&DAT_100d97a0)[-(iVar4 >> 0x1f)]) /
          (float)((double)iVar2 + (double)(&DAT_100d97a0)[-(iVar2 >> 0x1f)]);
  fVar7 = local_8;
LAB_10045ca1:
  *(int *)((int)this + 0xe50) = (int)((float)*(int *)((int)this + 0xe40) * fVar7);
  puVar5 = (undefined4 *)((int)this + 0xe50);
  *(int *)((int)this + 0xe54) = (int)((float)*(int *)((int)this + 0xe44) * fVar8);
  *(int *)((int)this + 0xe58) = (int)((float)*(int *)((int)this + 0xe48) * fVar7);
  *(int *)((int)this + 0xe5c) = (int)((float)*(int *)((int)this + 0xe4c) * fVar8);
  if (*(int *)((int)this + 0xfa74) == 0) {
    piVar6 = *(int **)((int)this + 0xfa80);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)*piVar1;
    }
    local_10 = (**(code **)(*piVar6 + 0x20))(0);
    piVar6 = *(int **)((int)this + 0xfa80);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)*piVar1;
    }
    local_c = (**(code **)(*piVar6 + 0x24))(0);
    puVar5 = &local_18;
    local_18 = 0;
    local_14 = 0;
  }
  FUN_100bbe59(*(int *)(*(int *)((int)this + 0xf6b8) + 0x1304),1,(int)puVar5);
  *(undefined1 *)((int)this + 0xf6a1) = 0;
  return;
}

