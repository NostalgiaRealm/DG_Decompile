/*
 * FUN_1002823b at 1002823b
 * int __thiscall FUN_1002823b(void * this, uint param_1, uint param_2)
 * Address ranges: 1002823b-100282ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1002823b(void *this,uint param_1,uint param_2)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_64 [22];
  int local_c;
  undefined4 *local_8;
  
  uVar3 = param_2;
  uVar2 = param_1;
  pvVar1 = *(void **)((int)this + 0xc);
  local_8 = this;
  uVar4 = FUN_100283d0(pvVar1,param_1,param_2);
  puVar7 = local_8;
  if (uVar4 != *(uint *)((int)pvVar1 + 8)) {
    iVar6 = *(int *)((int)pvVar1 + 4);
    iVar5 = uVar4 * 0x68;
    if ((*(uint *)(iVar5 + iVar6) == uVar2) && (*(uint *)(iVar5 + 4 + iVar6) == uVar3)) {
      iVar6 = iVar5 + 0x10 + iVar6;
      goto LAB_1002827a;
    }
  }
  iVar6 = 0;
LAB_1002827a:
  if (iVar6 == 0) {
    (**(code **)*local_8)(local_64,uVar2,uVar3);
    pvVar1 = (void *)puVar7[3];
    local_8 = (undefined4 *)FUN_100283d0(pvVar1,uVar2,uVar3);
    local_c = (int)local_8 * 0x68;
    if (((local_8 == (undefined4 *)*(uint *)((int)pvVar1 + 8)) ||
        (iVar6 = *(int *)((int)pvVar1 + 4), *(uint *)(local_c + iVar6) != param_1)) ||
       (*(uint *)(local_c + 4 + iVar6) != uVar3)) {
      FUN_100282f0(pvVar1,(uint)local_8,param_1,uVar3,&param_1,local_64);
    }
    else {
      puVar7 = local_64;
      puVar8 = (undefined4 *)(iVar6 + 0x10 + local_c);
      for (iVar5 = 0x16; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    iVar6 = *(int *)((int)pvVar1 + 4) + local_c + 0x10;
  }
  return iVar6;
}

