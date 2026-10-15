/*
 * FUN_180023780 at 180023780
 * undefined FUN_180023780(void)
 * Address ranges: 180023780-180023803
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023780(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [36];
  uint local_24;
  
  if (((*(longlong *)(param_1 + 0x28) != 0) &&
      ((((*(uint *)(param_1 + 0x48) >> 1 & 1) != 0 || (*(longlong *)(param_1 + 0x30) != 0)) &&
       ((*(uint *)(param_1 + 0x48) >> 3 & 1) == 0)))) &&
     (lVar1 = (*__imp_KERNEL32_dll_VirtualQuery)(*(longlong *)(param_1 + 0x28),auStack_48,0x30),
     lVar1 != 0)) {
    (*__imp_KERNEL32_dll_VirtualProtect)
              (*(undefined8 *)(param_1 + 0x28),
               (uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c),local_24 & 0xfffffeff,
               auStack_50);
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfffffffd;
  }
  return;
}

