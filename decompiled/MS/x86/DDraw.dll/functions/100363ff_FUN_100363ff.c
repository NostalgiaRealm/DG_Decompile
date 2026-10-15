/*
 * FUN_100363ff at 100363ff
 * undefined4 __thiscall FUN_100363ff(void * this, int * param_1, undefined4 param_2, int * param_3)
 * Address ranges: 100363ff-100364e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100363ff(void *this,int *param_1,undefined4 param_2,int *param_3)

{
  uint in_EAX;
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  int local_70 [20];
  undefined4 local_20;
  int local_c [2];
  
  if (((*(char *)((int)this + 0x10) != '\0') && (param_3 != (int *)0x0)) &&
     (in_EAX = (**(code **)(*param_1 + 0x38))(), (*(uint *)(in_EAX + 0x68) & 0x200) != 0)) {
    if (*(char *)((int)this + 0x11) != '\0') {
      FUN_10060d45(local_70,0,100);
      local_70[0] = 100;
      local_20 = 0;
      FUN_1002f8df(param_1,(RECT *)0x0,(int *)0x0,(int *)0x0,0x400,local_70);
      *(undefined1 *)((int)this + 0x11) = 0;
    }
    iVar1 = (**(code **)(*param_3 + 0x38))();
    in_EAX = *(uint *)(iVar1 + 0x68) & 0x4040;
    if (in_EAX != 0x4040) goto LAB_100364de;
    if (*(int *)((int)this + 8) != 0) {
      if (*(int *)((int)this + 0xc) != 0) goto LAB_100364b3;
      FUN_10026cef(*(void **)this,(HWND)0x0,8,'\0');
      puVar2 = (uint *)FUN_10036255(this,local_c);
      in_EAX = *puVar2;
      *(uint *)((int)this + 0xc) = in_EAX;
    }
    if (*(int *)((int)this + 0xc) != 0) {
LAB_100364b3:
      (**(code **)*param_3)();
      iVar1 = **(int **)((int)this + 0xc);
      uVar3 = (**(code **)(**(int **)this + 0x24))(-(uint)(param_3[1] != 0) & param_3[1] + 0x4cU);
      uVar3 = (**(code **)(iVar1 + 8))(uVar3);
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
LAB_100364de:
  return in_EAX & 0xffffff00;
}

