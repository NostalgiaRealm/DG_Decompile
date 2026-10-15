/*
 * FUN_10053234 at 10053234
 * uint __thiscall FUN_10053234(void * this, int * param_1)
 * Address ranges: 10053234-100532c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10053234(void *this,int *param_1)

{
  char cVar1;
  char extraout_AL;
  uint uVar2;
  FARPROC pFVar3;
  undefined3 uVar4;
  undefined3 extraout_var;
  
  uVar2 = FUN_10050ee6((int)this);
  if ((char)uVar2 != '\0') {
    pFVar3 = GetProcAddress(*(HMODULE *)((int)this + 0x2b8),"D3D12SerializeRootSignature");
    *(FARPROC *)((int)this + 0x6a0) = pFVar3;
    if (pFVar3 != (FARPROC)0x0) {
      *(undefined1 *)((int)this + 0x2d6) = 0;
      if (param_1 != (int *)0x0) {
        pFVar3 = (FARPROC)FUN_100592d0((void *)((int)this + 0x50c),param_1);
      }
      uVar2 = 0;
      uVar4 = (undefined3)((uint)pFVar3 >> 8);
      cVar1 = '\x01';
      if (*(int *)((int)this + 0x518) == 0) {
LAB_100532b1:
        return CONCAT31(uVar4,1);
      }
      do {
        if (cVar1 == '\0') goto LAB_100532b5;
        (**(code **)**(undefined4 **)(*(int *)((int)this + 0x514) + uVar2 * 4))
                  (*(undefined4 *)(*(int *)((int)this + 0x510) + 0x2b8),(void *)((int)this + 0x50c))
        ;
        uVar2 = uVar2 + 1;
        cVar1 = extraout_AL;
      } while (uVar2 < *(uint *)((int)this + 0x518));
      uVar4 = extraout_var;
      if (extraout_AL != '\0') goto LAB_100532b1;
    }
LAB_100532b5:
    uVar2 = FUN_10050ffc((int)this);
  }
  return uVar2 & 0xffffff00;
}

