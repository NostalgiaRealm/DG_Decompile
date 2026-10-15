/*
 * FUN_1004b1c0 at 1004b1c0
 * uint __thiscall FUN_1004b1c0(void * this, int * param_1)
 * Address ranges: 1004b1c0-1004b28b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1004b1c0(void *this,int *param_1)

{
  undefined4 *this_00;
  char cVar1;
  char extraout_AL;
  uint uVar2;
  FARPROC pFVar3;
  undefined3 uVar4;
  undefined3 extraout_var;
  
  uVar2 = FUN_1004761b((int)this);
  if ((char)uVar2 != '\0') {
    pFVar3 = GetProcAddress(*(HMODULE *)((int)this + 0x2b8),"D3D12SerializeRootSignature");
    *(FARPROC *)((int)this + 0x6a0) = pFVar3;
    if (pFVar3 != (FARPROC)0x0) {
      *(undefined1 *)((int)this + 0x2d6) = 0;
      if (param_1 != (int *)0x0) {
        this_00 = (undefined4 *)((int)this + 0x514);
        pFVar3 = (FARPROC)thunk_FUN_10060be1((LPVOID)*this_00);
        *this_00 = 0;
        *(undefined4 *)((int)this + 0x518) = 0;
        *(undefined4 *)((int)this + 0x51c) = 0;
        if (param_1[1] != 0) {
          uVar2 = 0;
          do {
            pFVar3 = (FARPROC)FUN_1000138a(this_00,(undefined4 *)(*param_1 + uVar2 * 4));
            uVar2 = uVar2 + 1;
          } while (uVar2 < (uint)param_1[1]);
        }
      }
      uVar4 = (undefined3)((uint)pFVar3 >> 8);
      cVar1 = '\x01';
      uVar2 = 0;
      if (*(int *)((int)this + 0x518) == 0) {
LAB_1004b278:
        return CONCAT31(uVar4,1);
      }
      do {
        if (cVar1 == '\0') goto LAB_1004b27c;
        (**(code **)**(undefined4 **)(*(int *)((int)this + 0x514) + uVar2 * 4))
                  (*(undefined4 *)(*(int *)((int)this + 0x510) + 0x2b8),(int)this + 0x50c);
        uVar2 = uVar2 + 1;
        cVar1 = extraout_AL;
      } while (uVar2 < *(uint *)((int)this + 0x518));
      uVar4 = extraout_var;
      if (extraout_AL != '\0') goto LAB_1004b278;
    }
LAB_1004b27c:
    uVar2 = FUN_10047731((int)this);
  }
  return uVar2 & 0xffffff00;
}

