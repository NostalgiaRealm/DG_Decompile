/*
 * FUN_1009b594 at 1009b594
 * uint __thiscall FUN_1009b594(void * this, int * param_1)
 * Address ranges: 1009b594-1009b65f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1009b594(void *this,int *param_1)

{
  undefined4 *this_00;
  char cVar1;
  char extraout_AL;
  uint uVar2;
  FARPROC pFVar3;
  undefined3 uVar4;
  undefined3 extraout_var;
  
  uVar2 = FUN_100948ad((int)this);
  if ((char)uVar2 != '\0') {
    pFVar3 = GetProcAddress(*(HMODULE *)((int)this + 0x2b8),"D3D12SerializeRootSignature");
    *(FARPROC *)((int)this + 0x6a0) = pFVar3;
    if (pFVar3 != (FARPROC)0x0) {
      *(undefined1 *)((int)this + 0x2d6) = 0;
      if (param_1 != (int *)0x0) {
        this_00 = (undefined4 *)((int)this + 0x514);
        pFVar3 = (FARPROC)thunk_FUN_100ad48c((LPVOID)*this_00);
        *this_00 = 0;
        *(undefined4 *)((int)this + 0x518) = 0;
        *(undefined4 *)((int)this + 0x51c) = 0;
        if (param_1[1] != 0) {
          uVar2 = 0;
          do {
            pFVar3 = (FARPROC)FUN_10003787(this_00,(undefined4 *)(*param_1 + uVar2 * 4));
            uVar2 = uVar2 + 1;
          } while (uVar2 < (uint)param_1[1]);
        }
      }
      uVar4 = (undefined3)((uint)pFVar3 >> 8);
      cVar1 = '\x01';
      uVar2 = 0;
      if (*(int *)((int)this + 0x518) == 0) {
LAB_1009b64c:
        return CONCAT31(uVar4,1);
      }
      do {
        if (cVar1 == '\0') goto LAB_1009b650;
        (**(code **)**(undefined4 **)(*(int *)((int)this + 0x514) + uVar2 * 4))
                  (*(undefined4 *)(*(int *)((int)this + 0x510) + 0x2b8),(int)this + 0x50c);
        uVar2 = uVar2 + 1;
        cVar1 = extraout_AL;
      } while (uVar2 < *(uint *)((int)this + 0x518));
      uVar4 = extraout_var;
      if (extraout_AL != '\0') goto LAB_1009b64c;
    }
LAB_1009b650:
    uVar2 = FUN_100949c3((int)this);
  }
  return uVar2 & 0xffffff00;
}

